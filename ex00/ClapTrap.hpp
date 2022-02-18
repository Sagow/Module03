#ifndef CLAPTRAP_hitpointsP
# define CLAPTRAP_hitpointsP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		~ClapTrap();
		ClapTrap &		operator=( ClapTrap const & rhs );

		ClapTrap(std::string myname);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		setAttackDamage(unsigned int ad);
		unsigned int	getHP(void);
		unsigned int	getEP(void);
		unsigned int	getAD(void);

	private:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy;
		unsigned int	_attackDamage;


};

#endif /* ******************************************************** CLAPTRAP_H */