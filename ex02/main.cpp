#include "FragTrap.hpp"

int main(void)
{
    FragTrap    Augustin("Augustin");
    FragTrap    Mickael("Mickael");

    Augustin.attack("Jean-Michel");


    Mickael.beRepaired(2);
    Mickael.takeDamage(8);
    Mickael.attack("Romuald");

    Augustin.highFivesGuys();


    return (0);
}