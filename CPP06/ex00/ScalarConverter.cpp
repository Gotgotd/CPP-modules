/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:04:46 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/15 15:49:04 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const& copy) {
	*this = copy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& rhs) {
	
	(void)rhs;
	return *this;
}

bool	isLiteralChar(std::string const& literal) {

	if (literal.length() == 1 && (literal[0]  >= 1 && literal[0] <= 127) && !isdigit(literal[0])) {
		return true;
	}
	else if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
		return true;
	else
		return false;
}

bool	isLiteralInt(std::string const& literal) {

	for (size_t i = ((literal[0] == '-' || literal[0] == '+') ? 1 : 0); literal[i]; i++) {
		if (!isdigit(literal[i]))
			return false;
	}
	return true;
}

bool	isLiteralFloat(std::string	const& literal) {

	int	dotFlag = 0;

	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		return true;
	size_t i = 0;
	if (literal[i] == '-' || literal[i] == '+') {
		i++;
	}
	if (literal[literal.length() - 1] != 'f')
			return false;
	for (; i < literal.length() - 1; i++) {		
		if (!isdigit(literal[i]) && literal[i] != '.')
			return false;
		if (literal[i] == '.') {
			dotFlag++;
			if (dotFlag != 1)
				return false;
		}
	}
	return true;
}

bool	isLiteralDouble(std::string literal) {
	
	int	dotFlag = 0;

	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return true;
	size_t i = 0;
	if (literal[i] == '-' || literal[i] == '+')
		i++;
	for (; i < literal.length(); i++) {		
		if (!isdigit(literal[i]) && literal[i] != '.')
			return false;
		if (literal[i] == '.') {
			dotFlag++;
			if (dotFlag != 1)
				return false;
		}
	}
	return true;
}

void	ScalarConverter::convert(std::string const& literal) {

	if (isLiteralChar(literal)) {
		char c = '\0';
		if (literal.length() == 1) 
			c = literal[0];
		else if (literal.length() == 3)
			c = literal[1];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	}

	else if (isLiteralInt(literal)) {
		char *endptr;
		long int l_nb = strtol(literal.c_str(), &endptr, 10);
		if (l_nb > INT_MAX || l_nb < INT_MIN) {
			std::cout << "Error. int overflow" << std::endl;
			return ;
		}
		else {
			int nb = static_cast<int>(l_nb);
			std::cout << "char: non displayable" << std::endl;
			std::cout << "int: " << nb << std::endl;
			std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
		}
	}

	else if (isLiteralFloat(literal)) {
		float	f_nb = strtof(literal.c_str(), NULL);
		if (isnanf(f_nb) || isinff(f_nb)) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << f_nb << "0f" << std::endl;
			std::cout << "double: " << f_nb << std::endl;
		}
		else {
		std::cout << "char: '*'" << std::endl;
		std::cout << "int: " << static_cast<int>(f_nb) << std::endl;
		if (literal == "0.0" || literal == "0")
			std::cout << "float: 0.0f" << std::endl;
		else
			std::cout << "float: " << f_nb << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f_nb) << ".0" << std::endl;
		}
	}

	else if (isLiteralDouble(literal)) {
		char *endptr;
		double	d_nb = strtof(literal.c_str(), &endptr);
		if (std::isnan(d_nb) || std::isinf(d_nb)) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << d_nb << "f" << std::endl;
			std::cout << "double: " << d_nb << std::endl;
		}
		else {
		std::cout << "char: '*'" << std::endl;
		std::cout << "int: " << static_cast<int>(d_nb) << std::endl;
		if (literal == "0.0" || literal == "0")
			std::cout << "float: 0.0f" << std::endl;
		else
			std::cout << "float: " << d_nb << ".0f" << std::endl;
		std::cout << "double: " << d_nb << ".0" << std::endl;
		}
	}

	else
		std::cout << "Error. No valid number or char to be converted" << std::endl;
}
