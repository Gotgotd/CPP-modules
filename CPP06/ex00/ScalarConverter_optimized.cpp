/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_optimized.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:36:24 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/15 15:49:04 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* # include "ScalarConverter.hpp"
# include <limits>
# include <sstream>
# include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const& copy) {
	*this = copy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& rhs) {
	
	(void)rhs;
	return *this;
}

////////////////////////////////////////////////////////////////////////////

void	ScalarConverter::convert(std::string const& literal) {

	std::stringstream	ss;
	double	d;
	float	f;
	int		i;
	char	c;

	ss << literal;
	ss >> d;

	if (ss.fail()) {
		if (literal.length() != 1) {
			d = std::strtod(literal.c_str(), NULL);
			if (d == 0.0) {
				std::cout << "char: impossible\nint: impossible/nfloat: impossible\ndouble: impossible" << std::endl;
				return ;
			}
		}
		else
			d = static_cast<double>(literal.at(0));
	}

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	if (std::isfinite(d)) {
		if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(c))
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char : " << c << std::endl;
		
		if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "char: impossible\nint: impossible" << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
} */