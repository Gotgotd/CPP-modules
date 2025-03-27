/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:20:08 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/16 16:05:24 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>
# include <algorithm>

template<typename T>
void	swap(T& x, T& y) {
	std::swap(x, y);
}

template<typename T>
T	max(T const& x, T const& y) {
	return (x > y ? x : y);
}

template<typename T>
T	min(T const& x, T const& y) {
	return (x < y ? x : y);
}

# endif 