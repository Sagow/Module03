#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	setHP();
	setEP();
	setAD();
}

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
	_hitpoints = rhs._hitpoints;
	_energy = rhs._energy;
	_attackDamage = rhs._attackDamage;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ScavTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hitpoints > 0)
	{
		_energy--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else if (_hitpoints > 0)
		std::cout << "ScavTrap " << _name << " doesn't have enough energy to attack." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is dead, it can't attack anymore." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " entered Gate keeper mode !" << std::endl;
}

void	ScavTrap::setHP(void)
{
	_hitpoints = 100;
}

void	ScavTrap::setEP(void)
{
	_energy = 50;
}

void	ScavTrap::setAD(void)
{
	_attackDamage = 20;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */