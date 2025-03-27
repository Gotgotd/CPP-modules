/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:58:09 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/18 10:33:25 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T, typename F>
void	iter(T* array, int length, F function) {
	for (int i = 0 ; i < length; i++) {
		function(array[i]);
	}
}

template<typename T>
void	printSomething(T& thing) {
	std::cout << thing << "   ";
}

#endif