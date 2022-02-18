#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Augustin("Augustin");
    ClapTrap    Mickael("Mickael");
    ClapTrap    Copie(Augustin);

    std::cout << "Stats actuelles : " << Augustin.getHP() << " hp, " << Augustin.getEP() << " ep, " << Augustin.getAD() << " ad" << std::endl;
    std::cout << "Stats de la copie : " << Copie.getHP() << " hp, " << Copie.getEP() << " ep, " << Copie.getAD() << " ad" << std::endl;

    Augustin.attack("Jean-Michel");
    Augustin.setAttackDamage(2);
    Augustin.attack("Jean-Michou");


    Mickael.beRepaired(2);
    Mickael.takeDamage(8);
    Mickael.takeDamage(8);
    Mickael.takeDamage(8);
    Mickael.attack("Romuald");

    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.beRepaired(3);
    Augustin.attack("Jean-Mich");



    return (0);
}