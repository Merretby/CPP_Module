#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "constructor called" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameZombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << ": has destroyed" << std::endl;
}