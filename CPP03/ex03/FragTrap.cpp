/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:31:35 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/17 11:45:16 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	setSavedDamage(30);
	_maxHitPoints = 100;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy): ClapTrap(copy) {
	*this=copy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {

	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

void	FragTrap::setSavedDamage(int attackDamage) {
	this->savedAttackDamage = attackDamage;
}

int	FragTrap::getSavedDamage() const {
	return this->savedAttackDamage;
}

void	FragTrap::highFiveGuys() {

	if (_hitPoints <= 0) {
		std::cout << "How could FragTrap " << _name << " highfive anyone, he is dead..." << std::endl;
		return ;
	}
	std::cout << "YAY ! High Five guys 👏!" << std::endl;
}