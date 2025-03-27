/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:18:11 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/10 15:04:34 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int	main() {

	Data	data;

	data.content = "Hello 42";
	//Serializer	serializer;
	std::cout << data.content << std::endl;

	std::cout << &data << std::endl;
	uintptr_t serialized = Serializer::serialize(&data);
	std::cout << serialized << std::endl;

	Data* desierializedData = Serializer::deserialize(serialized);
	std::cout << desierializedData << std::endl;
	
	return 0;
}