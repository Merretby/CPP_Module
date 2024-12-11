#include "Zombie.hpp"

int main()
{
    Zombie *Zombie = newZombie("test");
    Zombie->announce();
    randomChump("sfyga");
    delete Zombie;
}