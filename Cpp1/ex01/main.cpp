#include "Zombie.hpp"

int main()
{
    int n = -1;
    Zombie *Zombiez = zombieHorde(n, "sfayga");
    delete[] Zombiez;
}