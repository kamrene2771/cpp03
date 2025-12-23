#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), name("Default")
{
    hitPoints = 100;    
    energyPoints = 50;   
    attackDamage = 30;    

    std::cout << "DiamondTrap " << name << " constructed!\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), name(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;

    std::cout << "DiamondTrap " << this->name << " constructed!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    *this = other;
    std::cout << "DiamondTrap copy constructed!\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other) {
        ClapTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap assigned!\n";
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destructed!\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap '" << name
              << "' and ClapTrap name is '" << ClapTrap::name << "'!\n";
}
