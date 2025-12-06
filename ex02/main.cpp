#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n---- ClapTrap ----\n";
    ClapTrap a("Clappy");

    std::cout << "\n---- ScavTrap ----\n";
    ScavTrap b("Scavy");

    std::cout << "\n---- FragTrap ----\n";
    FragTrap c("Fraggy");

    std::cout << "\n---- Attack tests ----\n";
    a.attack("Target1");
    b.attack("Target2");
    c.attack("Target3");

    std::cout << "\n---- Special abilities ----\n";
    b.guardGate();
    c.highFivesGuys();

    std::cout << "\n---- Destruction order ----\n";
    return 0;
}
