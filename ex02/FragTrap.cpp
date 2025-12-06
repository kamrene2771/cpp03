#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap " << this->name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copy constructed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap assigned!" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "FragTrap " << name << " cannot attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " powerfully attacks " << target
              << ", dealing " << attackDamage << " damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive high five! ✋" << std::endl;
}
