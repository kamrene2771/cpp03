#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Default";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap " << name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap " << this->name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copy constructed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap assigned!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " viciously attacks " << target
              << ", causing " << attackDamage << " damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}
