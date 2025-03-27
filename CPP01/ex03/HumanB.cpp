/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:54:34 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 11:32:44 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), weapon(NULL) {}
HumanB::~HumanB() {}


void	HumanB::attack() const {

	if (weapon) {
		std::cout << _name << " with their " << weapon->getType() << std::endl;
	}
	else {
		std::cout << _name << " has no weapon !" << std::endl;
	}

}

void	HumanB::setWeapon(Weapon& newWeapon) {

	this->weapon = &newWeapon;
}

void	HumanB::removeWeapon() {  
	this->weapon = NULL;
}