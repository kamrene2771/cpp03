#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Default";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap " << name << " constructed!\n";
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap " << this->name << " constructed!\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copy constructed!\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap assigned!\n";
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructed!\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "ScavTrap " << name << " cannot attack!\n";
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!\n";
}
