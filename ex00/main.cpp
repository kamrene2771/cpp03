#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Khalil");
    ClapTrap b("Enemy");

    a.attack("Enemy");
    b.takeDamage(0);

    a.beRepaired(5);

    for (int i = 0; i < 12; i++)
        a.attack("Dummy");  

    a.beRepaired(2);        
    a.takeDamage(100);      
    a.attack("Ghost");      
    return 0;
}
