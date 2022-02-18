#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Anonymous") {}

ClapTrap::ClapTrap(std::string myname)
{
	_name = myname;
	_hp = 10;
	_ep = 10;
	_ad = 0;
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
		_hp = rhs._hp;
		_ep = rhs._ep;
		_ad = rhs._ad;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ClapTrap::attack(const std::string& target)
{
	if (_ep > 0 && _hp > 0)
	{
		_ep--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	}
	else if (_hp > 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough energy to attack." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is dead, it can't attack anymore." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead :(" << std::endl;
	}
	else if (amount >= _hp)
	{
		std::cout << "ClapTrap " << _name << " died after taking " << _hp << " points of damage!" << std::endl;
		_hp = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
		_hp -= amount;
	}
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		_hp += amount;
		_ep--;
		std::cout << "ClapTrap " << _name << " regains " << amount << " health points!" << std::endl;
	}
	else if (_hp > 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough energy to heal itself." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is dead, it can't heal anymore." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		ClapTrap::setAttackDamage(unsigned int ad)
{
	_ad = ad;
}

unsigned int	ClapTrap::getHP(void)
{
	return (_hp);
}

unsigned int	ClapTrap::getEP(void)
{
	return (_ep);
}

unsigned int	ClapTrap::getAD(void)
{
	return (_ad);
}

/* ************************************************************************** */