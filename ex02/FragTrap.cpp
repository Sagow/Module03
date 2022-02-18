#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	setHP();
	setEP();
	setAD();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructeur de FragTrap" << std::endl;
	setHP();
	setEP();
	setAD();
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Destructeur de FragTrap" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

void		FragTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hitpoints > 0)
	{
		_energy--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else if (_hitpoints > 0)
		std::cout << "FragTrap " << _name << " doesn't have enough energy to attack." << std::endl;
	else
		std::cout << "FragTrap " << _name << " is dead, it can't attack anymore." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << " requests a high five !" << std::endl;
}

void	FragTrap::setHP(void)
{
	_hitpoints = 100;
}

void	FragTrap::setEP(void)
{
	_energy = 100;
}

void	FragTrap::setAD(void)
{
	_attackDamage = 30;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */