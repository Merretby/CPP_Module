#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("sfayga");

    claptrap.attack("a target");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);
}