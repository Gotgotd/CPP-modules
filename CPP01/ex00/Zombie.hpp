/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautier <gautier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:45:15 by gautier           #+#    #+#             */
/*   Updated: 2024/08/15 17:02:05 by gautier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

	private:

		std::string	_name;

	public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif