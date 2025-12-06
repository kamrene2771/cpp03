#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "---- Create ClapTrap ----" << std::endl;
    ClapTrap a("Clappy");

    std::cout << "\n---- Create ScavTrap ----" << std::endl;
    ScavTrap b("Scavy");

    std::cout << "\n---- Test attacks ----" << std::endl;
    a.attack("Target A");
    b.attack("Target B");

    std::cout << "\n---- Test ScavTrap special ability ----" << std::endl;
    b.guardGate();

    std::cout << "\n---- Destruction order ----" << std::endl;
    return 0;
}
