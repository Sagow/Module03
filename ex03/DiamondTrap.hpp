#ifndef DIAMONDTRAP_hitpointsP
# define DIAMONDTRAP_hitpointsP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();
		DiamondTrap &	operator=( DiamondTrap const & rhs );

		DiamondTrap(std::string name);

		void	attack(const std::string& target);
		void whoAmI();

	private:
		std::string	_name;

};

#endif /* ***************************************************** DIAMONDTRAP_H */