#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap")
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    hitpoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    hitpoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    name = copy.name;
    hitpoints = copy.hitpoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}