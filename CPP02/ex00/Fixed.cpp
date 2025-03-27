/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:42:06 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 15:25:31 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(): _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fCpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this=fCpy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void	Fixed::setRawBits(int const raw) {
	this->_n = raw;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();

	return *this;
}

