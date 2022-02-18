#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructeur de ScavTrap" << std::endl;
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src._name)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Destructeur de ScavTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	_name = rhs._name;
	_hp = rhs._hp;
	_ep = rhs._ep;
	_ad = rhs._ad;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate()
{
	std::cout << _name << "entered Gate keeper mode !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */