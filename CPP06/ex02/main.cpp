/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:24:26 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/15 14:37:05 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

int	main() {

	srand(time(0));
	Base	base;
	Base*	test1 = NULL;
	Base*	test2 = NULL;
	Base*	test3 = NULL;

	std::cout << "Tests by pointers with NULL :" << std::endl;
	base.identify(test1);
	base.identify(test2);
	base.identify(test3);	

	std::cout << std::endl;
	std::cout << "Tests by reference with no cast possible :" << std::endl;
	base.identify(base);

	test1 = base.generate();
	test2 = base.generate();
	test3 = base.generate();

	std::cout << std::endl;
	std::cout << "Tests by pointers :" << std::endl;
	base.identify(test1);
	base.identify(test2);
	base.identify(test3);

	std::cout << std::endl;
	std::cout << "Tests by references :" << std::endl;
	base.identify(*test1);
	base.identify(*test2);
	base.identify(*test3);

	delete test1;
	delete test2;
	delete test3;

	return 0;
}