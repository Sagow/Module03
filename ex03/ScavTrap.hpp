#ifndef SCAVTRAP_hitpointsP
# define SCAVTRAP_hitpointsP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		ScavTrap &		operator=( ScavTrap const & rhs );

		ScavTrap(std::string name);

		void	attack(const std::string& target);
		void	guardGate();
		void	setHP(void);
		void	setEP(void);
		void	setAD(void);

	private:

};


#endif /* ******************************************************** SCAVTRAP_H */