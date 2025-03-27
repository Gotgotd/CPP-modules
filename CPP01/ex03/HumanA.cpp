/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:34:17 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/17 16:54:49 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& newWeapon) : _name(name), weapon(newWeapon) {}
HumanA::~HumanA() {}

void	HumanA::attack() const {

	std::cout << _name << " with their " << weapon.getType() << std::endl;
}