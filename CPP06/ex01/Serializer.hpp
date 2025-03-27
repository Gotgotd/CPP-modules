/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:48:17 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/15 11:09:51 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data {
	std::string	content;
};

class Serializer {

	private:

	Serializer();
	Serializer(Serializer const& copy);

	public:
	
	~Serializer();

	Serializer&	operator=(Serializer const& rhs);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);

};

#endif