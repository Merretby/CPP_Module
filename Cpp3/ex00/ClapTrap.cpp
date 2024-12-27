#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << this->name << " he's join the war" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = copy.name;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "deconstructor kill evreyone" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints == 0 || this->hitpoints == 0)
        std::cout << "ClapTrap " << this->name << " has no energy points to attack" << std::endl;
    else
    {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints == 0 || this->energyPoints == 0)
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
    else
    {
        this->hitpoints -= amount;
        std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints == 0 || this->energyPoints == 0)
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
    else
    {
        this->hitpoints += amount;
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " has been repaired by " << amount << " points!" << std::endl;
    }
}

void ClapTrap::checkEnergy()
{
    std::cout << this->hitpoints << std::endl;
    std::cout << this->energyPoints << std::endl;
    std::cout << this->attackDamage << std::endl;
}