/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:28:50 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/10 14:52:56 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const& copy) {
	*this = copy;
}

Serializer::~Serializer() {}

Serializer&	Serializer::operator=(Serializer const& rhs) {
	(void)rhs;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}