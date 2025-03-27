/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:05:22 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/22 17:59:49 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>

class Span {

	private: 

	unsigned int 	N;

	Span();

	public:
	std::vector<int>	_container;
	Span(unsigned int n);
	Span(Span const& copy);
	~Span();

	Span&			operator=(Span const& rhs);
	unsigned int	getN() const;

	void	addNumber(int nb);
	int		shortestSpan();
	int		longestSpan();
	void	addRange();
};

#endif