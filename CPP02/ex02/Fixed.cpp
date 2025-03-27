/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:42:06 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/23 11:41:05 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int const Fixed::_bits = 8;

/* CONSTRUCTORS*/

Fixed::Fixed(): _n(0) {}

Fixed::Fixed(int const n) {
	_n = n << _bits;
}

Fixed::Fixed(float const f) {
	_n = roundf(f * (1 << _bits));
}

Fixed::Fixed(Fixed const & fCpy) {
	*this=fCpy;
}

Fixed::~Fixed() {}

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

/* OPERATORS OVERLOAD // ARITHMETIC */

Fixed&	Fixed::operator=(Fixed const & rhs) {
	this->_n = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const & rhs) const {
	Fixed result;
	result.setRawBits(this->_n + rhs.getRawBits());
	return result;
}

Fixed	Fixed::operator-(Fixed const & rhs) const {
	Fixed result;
	result.setRawBits(this->_n - rhs.getRawBits());
	return result;
}

Fixed	Fixed::operator*(Fixed const & rhs) const {
	Fixed result;
	result.setRawBits((this->_n * rhs.getRawBits()) >> _bits);
	return result;
}

Fixed	Fixed::operator/(Fixed const & rhs) const {
	Fixed result;
	result.setRawBits((this->_n << _bits) / rhs.getRawBits());
	return result;
}

/* OPERATORS OVERLOAD // COMPARISON */

bool	Fixed::operator>(Fixed const & rhs) const {
	return this->_n > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const & rhs) const {
	return this->_n < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const & rhs) const {
	return this->_n >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const & rhs) const {
	return this->_n <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const & rhs) const {
	return this->_n == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const & rhs) const {
	return this->_n != rhs.getRawBits();
}

/* OPERATORS OVERLOAD // (PRE) INCREMENTATION / (PRE) DECREMENTATION */

//pre incrementation
Fixed&	Fixed::operator++() {
	this->_n += 1;
	return *this;
}

//post incrementation
Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	this->_n += 1;
	return temp;
}

//pre decrementation
Fixed&	Fixed::operator--() {
	this->_n -= 1;
	return *this;
}

//post decrementation
Fixed	Fixed::operator--(int) {
	Fixed temp = *this;
	this->_n -= 1;
	return temp;
}

/* MIN & MAX FCT */

Fixed&   Fixed::min(Fixed& a, Fixed& b) {
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed&   Fixed::max(Fixed& a, Fixed& b) {
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

/* STREAM OPERATOR */

std::ostream&	operator<<(std::ostream & opStream, Fixed const & rhs) {

	opStream << rhs.toFloat();
	return opStream;
}
/*----------------------------------------------------------------*/
