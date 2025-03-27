/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:55:29 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/21 11:52:21 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyFind.tpp"
# include <vector>
# include <list>

int	main() {

	int intArray[] = {8, 5, 7, 3};
	std::vector<int> myVector(intArray, intArray+4);

	std::cout << "VECTOR TEST" << std::endl;
	try {
		std::vector<int>::const_iterator result = easyfind(myVector, 7);
		std::cout << "found value : " << *result << std::endl; 
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::vector<int>::const_iterator result = easyfind(myVector, 6);
		std::cout << "found value : " << *result << std::endl; 
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "LIST TEST" << std::endl;
	std::list<int> myList(intArray, intArray+4);
	try {
		std::list<int>::const_iterator result = easyfind(myList, 7);
		std::cout << "found value : " << *result << std::endl; 
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::list<int>::const_iterator result = easyfind(myList, 6);
		std::cout << "found value : " << *result << std::endl; 
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}