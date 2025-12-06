#include "DiamondTrap.hpp"

int main()
{
    std::cout << "\n--- Creating DiamondTrap ---\n";
    DiamondTrap d("Khalil");

    std::cout << "\n--- Testing attack ---\n";
    d.attack("Target");

    std::cout << "\n--- Testing whoAmI ---\n";
    d.whoAmI();

    std::cout << "\n--- End of program ---\n";
    return 0;
}
