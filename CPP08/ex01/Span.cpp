/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:07:39 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/22 17:59:49 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int n): N(n) {}

Span::Span(Span const& copy) {
	*this=copy;
}

Span::~Span() {}

Span&	Span::operator=(Span const& rhs) {
	if (this != &rhs) {
		N = rhs.getN();
	}
	return *this;
}

unsigned int	Span::getN() const {
	return this->N;
}

void	Span::addNumber(int nb) {
	if (_container.size() < N) {
		_container.push_back(nb);
	}
	else
		throw std::out_of_range("no more space left on Span to add a new number");
}

int	Span::longestSpan() {
	if (N > 1) {
		std::sort(_container.begin(), _container.end());
		return *_container.rbegin() - *_container.begin();
	}
	throw std::range_error("not enough numbers in Span");
}

int	Span::shortestSpan() {
	int	result = longestSpan();
	std::vector<int>::const_iterator it = _container.begin();
	std::vector<int>::const_iterator next_it = it;
	++next_it;

	for (; next_it != _container.end(); ++next_it) {
		int	diff = *next_it - *it;
		if (diff < result)
			result = diff;
	}
	return result;
}

void	Span::addRange() {
	if (N == 0)
		throw std::out_of_range("Container is empty");
	for (unsigned int i = 0; i < N; i++)
		_container.push_back(rand() % N);
}
