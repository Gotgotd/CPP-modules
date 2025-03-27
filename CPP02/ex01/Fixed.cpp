/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:42:06 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 17:59:10 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int const Fixed::_bits = 8;

/* CONSTRUCTORS*/

Fixed::Fixed(): _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	_n = n << _bits;
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(f * (1 << _bits));
}

Fixed::Fixed(Fixed const & fCpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this=fCpy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* GETTER / SETTER */

int	Fixed::getRawBits() const {
	return this->_n;
}

void	Fixed::setRawBits(int const raw) {
	this->_n = raw;
}


/* MEMBERS FCT */

float	Fixed::toFloat() const {
	return static_cast<float>(_n) / 256;
}

int	Fixed::toInt() const {
	return _n / 256;
}

/* OPERATORS OVERLOAD */

Fixed&	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();

	return *this;
}

std::ostream &	operator<<(std::ostream & opStream, Fixed const & rhs) {

	opStream << rhs.toFloat();
	return opStream;
}
/*----------------------------------------------------------------*/
