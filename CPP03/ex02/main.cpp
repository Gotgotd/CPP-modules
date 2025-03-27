/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:59:33 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/11 16:10:10 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {

	ClapTrap	clapTrap_J("Jack");
	ClapTrap	clapTrap_P("Phil");
	ScavTrap	scavTrap_B("Blaise");
	FragTrap	fragTrap_C("Colin");


	std::cout << "\n// CLAPTRAP TESTS //" << std::endl;
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

	std::cout << std::endl << std::endl;
	std::cout << "// SCARVTRAP TESTS //" << std::endl;
	scavTrap_B.attack("that lazy Jose");
	std::cout << "Blaise energy points : " << scavTrap_B.getEnergyPoints() << std::endl;
	std::cout << "Blaise hit points : " << scavTrap_B.getHitPoints() << std::endl;
	scavTrap_B.takeDamage(47);
	std::cout << "Blaise hit points : " << scavTrap_B.getHitPoints() << std::endl;
	scavTrap_B.beRepaired(24);
	std::cout << "Blaise hit points : " << scavTrap_B.getHitPoints() << std::endl;
	scavTrap_B.guardGate();
	scavTrap_B.takeDamage(101);
	scavTrap_B.beRepaired(100);
	scavTrap_B.guardGate();

	std::cout << std::endl << std::endl;
	std::cout << "// FRAGTRAP TESTS //" << std::endl;
	fragTrap_C.attack("scumbag James");
	std::cout << "Colin energy points : " << fragTrap_C.getEnergyPoints() << std::endl;
	std::cout << "Colin hit points : " << fragTrap_C.getHitPoints() << std::endl;
	fragTrap_C.takeDamage(47);
	std::cout << "Colin hit points : " << fragTrap_C.getHitPoints() << std::endl;
	fragTrap_C.beRepaired(24);
	std::cout << "Colin hit points : " << fragTrap_C.getHitPoints() << std::endl;
	fragTrap_C.highFiveGuys();
	fragTrap_C.takeDamage(101);
	fragTrap_C.beRepaired(100);
	fragTrap_C.highFiveGuys();

	std::cout << std::endl;
	
	return 0;
}