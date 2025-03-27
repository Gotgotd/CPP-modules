/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:47:53 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/16 11:37:34 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & copy);
	virtual ~DiamondTrap();

	DiamondTrap&	operator=(DiamondTrap const & rhs);

	void	whoAmI();
	void	attack(const std::string& target);

	unsigned int	getAttackDamage() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getHitPoints() const;

	protected:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};