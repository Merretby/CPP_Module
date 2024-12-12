#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>


typedef enum e_case
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
} t_case;

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);
};

typedef void (Harl::*HarlFunction)();

#endif