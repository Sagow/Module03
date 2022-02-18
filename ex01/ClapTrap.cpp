#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Anonymous") {}

ClapTrap::ClapTrap(std::string myname)
{
	_name = myname;
	_hitpoints = 10;
	_energy = 10;
	_attackDamage = 0;
	std::cout << "Say Hello to your new ClapTrap, " << _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Say Goodbye to your ClapTrap friend " << _name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		_hitpoints = rhs._hitpoints;
		_energy = rhs._energy;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ClapTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hitpoints > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else if (_hitpoints > 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough energy to attack." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is dead, it can't attack anymore." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead :(" << std::endl;
	}
	else if (amount >= _hitpoints)
	{
		std::cout << "ClapTrap " << _name << " died after taking " << _hitpoints << " points of damage!" << std::endl;
		_hitpoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
		_hitpoints -= amount;
	}
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _hitpoints > 0)
	{
		_hitpoints += amount;
		_energy--;
		std::cout << "ClapTrap " << _name << " regains " << amount << " health points!" << std::endl;
	}
	else if (_hitpoints > 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough energy to heal itself." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is dead, it can't heal anymore." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		ClapTrap::setAttackDamage(unsigned int ad)
{
	_attackDamage = ad;
}

unsigned int	ClapTrap::getHP(void)
{
	return (_hitpoints);
}

unsigned int	ClapTrap::getEP(void)
{
	return (_energy);
}

unsigned int	ClapTrap::getAD(void)
{
	return (_attackDamage);
}

/* ************************************************************************** */