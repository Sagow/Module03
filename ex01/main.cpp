#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    Augustin("Augustin");
    ScavTrap    Mickael("Mickael");

    Augustin.attack("Jean-Michel");


    Mickael.beRepaired(2);
    Mickael.takeDamage(8);
    Mickael.attack("Romuald");

    Augustin.guardGate();


    return (0);
}