#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string myname);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		setAttackDamage(unsigned int ad);
		unsigned int	getHP(void);
		unsigned int	getEP(void);
		unsigned int	getAD(void);

	protected:

		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;


};

#endif /* ******************************************************** CLAPTRAP_H */