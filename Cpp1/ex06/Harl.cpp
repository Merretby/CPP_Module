#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[DEBUG]   messages contain contextual information." << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]   messages contain extensive information." << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]   messages indicate a potential issues in the system." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]   messages indicate an unrecoverable error has occurred." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunction functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
    }
    return;
}