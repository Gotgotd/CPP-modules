/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:14:41 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/12 15:09:36 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & copy);
	~ScavTrap();

	ScavTrap&	operator=(ScavTrap const & rhs);

	void	guardGate();
	void	attack(const std::string& target);
};