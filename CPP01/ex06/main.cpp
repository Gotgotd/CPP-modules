/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:13:16 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/20 17:50:24 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {

	if (ac == 2) {
		std::string level = av[1];
		Harl		harl;

		harl.complain(level);
	}
	else 
		std::cout << "Error. Program must take one and only one complaint" << std::endl;
	return 0;
}