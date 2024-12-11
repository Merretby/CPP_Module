#include "HumanB.hpp"

HumanB::HumanB(std::string name) : Weapon_B(NULL)
{
    type = name;
}

void HumanB::setWeapon(Weapon &B)
{
    Weapon_B = &B;
}

std::string HumanB::getType()
{
    return type;
}

void HumanB::attack()
{
    if (Weapon_B)
        std::cout << type << " attacks with their " << Weapon_B->getType() << std::endl;
    else
        std::cout << type << " attacks with their bare hands" << std::endl;
}