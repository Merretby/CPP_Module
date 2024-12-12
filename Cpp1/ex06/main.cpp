#include "Harl.hpp"

int main(int ac, char **av)
{
   if (ac == 2)
   {
        Harl harl;
        std::string arg = av[1];
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        t_case harl_case = INVALID;
        
        for (int i = 0; i < 4; i++)
        {
            if (arg == levels[i])
            {
                harl_case = (t_case)i;
                break;
            }
        }
        switch (harl_case)
        {
            case (DEBUG):
                harl.complain("DEBUG");
            case (INFO):
                harl.complain("INFO");
            case (WARNING):
                harl.complain("WARNING");
            case (ERROR):
                harl.complain("ERROR");
                break;
            case (INVALID):
                std::cout << "Invalid argument" << std::endl;
                break;
            default:
                break;
        }
   }
   else
    std::cout << "Usage: ./Harl 2 Argument" << std::endl;
}