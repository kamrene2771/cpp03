#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap " << name << " constructed!\n";
}

FragTrap::FragTrap(const std::string& name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap " << this->name << " constructed!\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copy constructed!\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap assigned!\n";
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructed!\n";
}

void FragTrap::attack(const std::string& target)
{
    if (energyPoints <= 0 || hitPoints <= 0) {
        std::cout << "FragTrap " << name << " cannot attack!\n";
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " damage!\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five! ✋\n";
}
