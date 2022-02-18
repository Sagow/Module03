#include "FragTrap.hpp"

int main(void)
{
    FragTrap    Augustin("Augustin");
    FragTrap    Mickael("Mickael");
    FragTrap    Copie(Augustin);

    std::cout << "Stats actuelles : " << Augustin.getHP() << " hp, " << Augustin.getEP() << " ep, " << Augustin.getAD() << " ad" << std::endl;
    std::cout << "Stats de la copie : " << Copie.getHP() << " hp, " << Copie.getEP() << " ep, " << Copie.getAD() << " ad" << std::endl;

    Augustin.attack("Jean-Michel");


    Mickael.beRepaired(2);
    Mickael.takeDamage(8);
    Mickael.attack("Romuald");

    Augustin.highFivesGuys();


    return (0);
}