/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:45:15 by gautier           #+#    #+#             */
/*   Updated: 2024/08/16 11:50:05 by gdaignea         ###   ########.fr       */
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

	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif