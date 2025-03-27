/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:34:35 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/17 16:58:13 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	
	public: 
	
	std::string	_name;
	Weapon&		weapon;

	HumanA(std::string name, Weapon& newWeapon);
	~HumanA(void);

	void	attack() const;
	
};

#endif