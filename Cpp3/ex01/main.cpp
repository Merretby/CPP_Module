#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap sfayga("sfayha");
	ScavTrap baaz;

	
	sfayga.attack("woooow");
    std::cout << "\n----------------------\n";
	sfayga.takeDamage(5);
    std::cout << "\n----------------------\n";
	sfayga.beRepaired(100);


    std::cout << "\n<---------------------->\n";
	
	baaz.attack("bad");
    std::cout << "\n----------------------\n";
	baaz.takeDamage(50);
    std::cout << "\n----------------------\n";
	baaz.beRepaired(50);
    std::cout << "\n----------------------\n";
	baaz.guardGate();
}