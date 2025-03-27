/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:04:44 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/16 15:57:52 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() {

	std::cout << "Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {

	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getSavedDamage();
	_hitPoints = FragTrap::getHitPoints();; 
	std::cout << "DiamondTrap constructor " << _name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) {
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
	*this=copy;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs) {

	if ( this != &rhs ) {
		this->_name = rhs.getName();;
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

void	DiamondTrap::attack(const std::string &target) {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {

	if (_hitPoints <= 0) {
		std::cout << "How could DiamondTrap " << _name << " wonder anything, he is dead..." << std::endl;
		return ;
	}
	std::cout << "My Diamond name is : " << _name << std::endl;
	std::cout << "My ClapTrap name is : " << ClapTrap::_name << std::endl;
}

unsigned int	DiamondTrap::getHitPoints() const {
	return this->_hitPoints;
}

unsigned int	DiamondTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

unsigned int	DiamondTrap::getAttackDamage() const {
	return this->_attackDamage;
}