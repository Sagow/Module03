#ifndef FRAGTRAP_hitpointsP
# define FRAGTRAP_hitpointsP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		~FragTrap();
		FragTrap &		operator=( FragTrap const & rhs );

		FragTrap(std::string name);

		void	attack(const std::string& target);
		void	highFivesGuys(void);
		void	setHP(void);
		void	setEP(void);
		void	setAD(void);

	private:

};


#endif /* ******************************************************** FragTRAP_H */