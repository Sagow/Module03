#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructeur de FragTrap" << std::endl;
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
	_hp = rhs._hp;
	_ep = rhs._ep;
	_ad = rhs._ad;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys(void)

{
	std::cout << _name << " requests a high five !" << std::endl;
	setHP();
	setEP();
	setAD();
}

void	FragTrap::setHP(void)
{
	_hp = 100;
}

void	FragTrap::setEP(void)
{
	_ep = 100;
}

void	FragTrap::setAD(void)
{
	_ad = 30;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */