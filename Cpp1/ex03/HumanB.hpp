#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
    private:
        std::string type;
        Weapon *Weapon_B;
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &B);
        std::string getType();
};

#endif