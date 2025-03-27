/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:57:45 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/18 10:35:56 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"


int	main() {

	int			intArray[5] = {1, 2, 3, 4, 5};
	float		floatArray[5] = {42.02f, 12.02f, 54.03f, 47.52f, 89.23f};
	std::string	strArray[3] = {"hello world", "bonjour le monde", "hola mundo"};
	const char	*array = "hello world";

	::iter(intArray, 5, printSomething<int>);
	std::cout << std::endl;
	::iter(floatArray, 5, printSomething<float>);
	std::cout << std::endl;
	::iter(strArray, 3, printSomething<std::string>);
	std::cout << std::endl;
	::iter(array, 11, printSomething<const char>);
	std::cout << std::endl;;

	return 0;
}