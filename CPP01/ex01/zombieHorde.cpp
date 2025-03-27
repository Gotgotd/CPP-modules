/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:10:53 by gautier           #+#    #+#             */
/*   Updated: 2024/08/16 11:57:57 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name ) {

	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++) {

		horde[i].setName(name);
		horde[i].announce();
	}
	return horde;
}