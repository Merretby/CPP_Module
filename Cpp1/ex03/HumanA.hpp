#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string type;
        Weapon &Weapon_A;
    public:
        HumanA(std::string name, Weapon &A);
        void attack();
};

#endif