#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap")
{
    std::cout << "FragTrap default constructor called\n";
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called\n";
    hitpoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called\n";
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap assignation operator called\n";
    name = copy.name;
    hitpoints = copy.hitpoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " high fives guys\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}