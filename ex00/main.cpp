#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Khalil");
    ClapTrap b("Enemy");

    a.attack("Enemy");
    b.takeDamage(0);

    a.beRepaired(5);

    for (int i = 0; i < 12; i++)
        a.attack("Dummy");   // drains energy

    a.beRepaired(2);        // should fail (no energy)
    a.takeDamage(100);      // kills
    a.attack("Ghost");      // should fail

    return 0;
}
