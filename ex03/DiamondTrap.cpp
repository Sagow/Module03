#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap((std::string)"Anonymous" + "_clap_trap"), ScavTrap(), FragTrap(), _name("Anonymous") {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "Constructeur de DiamondTrap" << std::endl;
	FragTrap::setHP();
	ScavTrap::setEP();
	FragTrap::setAD();
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src), ScavTrap(src), FragTrap(src) {}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructeur de DiamondTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI()
{
	std::cout << "I\'m a Diamond Trap named " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */