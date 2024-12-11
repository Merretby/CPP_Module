#include "Weapon.hpp"

Weapon::Weapon(std::string tmp)
{
    this->Weapon_type = tmp;
}

void Weapon::setType(std::string Weapon_type)
{
    this->Weapon_type = Weapon_type;
}

std::string &Weapon::getType()
{
    return (this->Weapon_type);
}
