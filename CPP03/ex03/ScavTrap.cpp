/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:40:29 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/16 11:32:08 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	_maxHitPoints = 100;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy): ClapTrap(copy) {
	*this=copy;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

void	ScavTrap::guardGate() {

	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " cannot guard the gate, he is dead..." << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << _name << " is now in gate keeper mode, you shall not pass !" << std::endl;
}

void	ScavTrap::attack(const std::string & target) {

	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is dead..." << std::endl;
		return ;
	}
	if (_energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " has no more energy points and can't do anything..." << std::endl;
		return ;
	}

	_energyPoints--;
	std::cout << "ScavTrap " << _name << " inflicts " << _attackDamage << " points of damage to " << target << std::endl;
}
