/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:42:35 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/22 17:50:44 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public: 

	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & fCpy);
	~Fixed();

	Fixed&	operator=(Fixed const & rhs);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const ;
	int		toInt() const;

private:

	static int const	_bits;
	int					_n;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif