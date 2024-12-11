#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &A) : type(name), Weapon_A(A)
{
}

void HumanA::attack()
{
    std::cout << type << " attacks with their " << Weapon_A.getType() << std::endl;
}