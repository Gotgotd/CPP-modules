/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:02:52 by gautier           #+#    #+#             */
/*   Updated: 2024/08/15 17:36:09 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie*	toto_heap = newZombie("toto_heap");
	
	randomChump("gogo_stack");
	delete toto_heap;
	return 0;
}