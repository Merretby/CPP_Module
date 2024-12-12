#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "Debug messages contain contextual information" << std::endl;
}

void Harl::info()
{
    std::cout << "Info messages contain extensive information" << std::endl;
}

void Harl::warning()
{
    std::cout << "Warning messages indicate a potential issues in the system" << std::endl;
}

void Harl::error()
{
    std::cout << "Error messages indicate an unrecoverable error has occurred" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    HarlFunction functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for(int i = 0; i < 4; i++)
    {
        if(level == levels[i])
        {
            (this->*functions[i])();
            for(int j = i + 1; j < 4; j++)
            {
                (this->*functions[j])();
            }
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
    return;
}