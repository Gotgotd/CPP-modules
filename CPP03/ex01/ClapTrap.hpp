/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:03:37 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/12 15:19:28 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & clapCopy);
	virtual ~ClapTrap();

	ClapTrap&	operator=(ClapTrap const & rhs);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void			setAttackDamage(unsigned int attack);
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	std::string		getName() const;

	protected:

	std::string		_name;
	int				_hitPoints;
	unsigned int	_maxHitPoints;
	int				_energyPoints;
	int				_attackDamage;

};


#endif