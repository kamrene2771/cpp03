#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap copy constructor called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap assignment operator called!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot attack (no HP or Energy left)!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;

    std::cout << "ClapTrap " << name
              << " takes " << amount
              << " points of damage! Remaining HP: "
              << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << name
                  << " cannot repair (no HP or Energy left)!" << std::endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;

    std::cout << "ClapTrap " << name
              << " repairs itself for " << amount
              << " HP! New HP: " << hitPoints << std::endl;
}
