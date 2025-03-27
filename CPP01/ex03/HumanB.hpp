/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:47:29 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 11:32:39 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	
	private: 
	
	std::string	_name;
	Weapon*		weapon;

	public:
	HumanB(std::string name);
	~HumanB(void);

	void	attack() const;
	void	setWeapon(Weapon &newWeapon);
	void	removeWeapon();
	
};

#endif