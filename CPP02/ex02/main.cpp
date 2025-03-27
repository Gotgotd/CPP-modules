/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:54:11 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/09 14:53:22 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void )
{
	Fixed   a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	//Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) ); //resultat attendu : 2.52344
	//Fixed const b( Fixed( 5.05f ) + Fixed( 2 ) ); //resultat attendu : 7.05078 
	//Fixed const b( Fixed( 5.05f ) - Fixed( 2 ) ); //resultat attendu : 3.05078

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	//std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	//std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	//std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}

/* output pour --a et a-- : 

0
-0.00390625
-0.00390625
-0.00390625
-0.0078125
10.1016
10.1016

 */