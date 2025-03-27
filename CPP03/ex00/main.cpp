/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:59:33 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/10 18:07:27 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	clapTrap_J("Jack");
	ClapTrap	clapTrap_P("Phil");

	clapTrap_J.attack("Bernard");
	clapTrap_J.setAttackDamage(4);
	clapTrap_J.attack("Jean-Claude");

	std::cout << std::endl;
	std::cout << "Jack hit points : " << clapTrap_J.getHitPoints() << std::endl;
	clapTrap_J.takeDamage(7);
	std::cout << "Jack hit points : " << clapTrap_J.getHitPoints() << std::endl;
	clapTrap_J.beRepaired(4);
	std::cout << "Jack hit points : " << clapTrap_J.getHitPoints() << std::endl;

	std::cout << std::endl;
	clapTrap_J.takeDamage(11);
	clapTrap_J.attack("Patrick");
	clapTrap_J.beRepaired(10);

	std::cout << std::endl;
	std::cout << "Phil energy points : " << clapTrap_P.getEnergyPoints() << std::endl;
	for (int i = 0; i < 10; i++) {
		clapTrap_P.attack("poor Richard");
	}
	std::cout << std::endl;
	clapTrap_P.attack("random");
	clapTrap_P.beRepaired(4);

	return 0;
}