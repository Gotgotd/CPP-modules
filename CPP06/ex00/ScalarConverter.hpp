/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:42:10 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/15 15:51:12 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cmath>

class ScalarConverter {

	private:
	ScalarConverter();
	
	public:

	ScalarConverter(ScalarConverter const& copy);
	~ScalarConverter();

	ScalarConverter&	operator=(ScalarConverter const& rhs);

	static void	convert(std::string const& toConvert);
};

#endif