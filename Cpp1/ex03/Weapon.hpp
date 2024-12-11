#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string Weapon_type;
    public:
        Weapon(std::string tmp);
        std::string &getType();
        void setType(std::string Weapon_type);
};

#endif