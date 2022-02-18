#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructeur de ScavTrap" << std::endl;
	setHP();
	setEP();
	setAD();
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src) {}


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

void		ScavTrap::attack(const std::string& target)
{
	if (_ep > 0 && _hp > 0)
	{
		_ep--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	}
	else if (_hp > 0)
		std::cout << "ScavpTrap " << _name << " doesn't have enough energy to attack." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is dead, it can't attack anymore." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " entered Gate keeper mode !" << std::endl;
}

void	ScavTrap::setHP(void)
{
	_hp = 100;
}

void	ScavTrap::setEP(void)
{
	_ep = 50;
}

void	ScavTrap::setAD(void)
{
	_ad = 20;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */