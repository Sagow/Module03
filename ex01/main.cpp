#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    Augustin("Augustin");
    ScavTrap    Mickael("Mickael");
    ScavTrap    Copie(Augustin);

    std::cout << "Stats actuelles : " << Augustin.getHP() << " hp, " << Augustin.getEP() << " ep, " << Augustin.getAD() << " ad" << std::endl;
    std::cout << "Stats de la copie : " << Copie.getHP() << " hp, " << Copie.getEP() << " ep, " << Copie.getAD() << " ad" << std::endl;
    Augustin.attack("Jean-Michel");


    Mickael.beRepaired(2);
    Mickael.takeDamage(8);
    Mickael.attack("Romuald");

    Augustin.guardGate();


    return (0);
}