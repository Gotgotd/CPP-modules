/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:32:11 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/16 15:57:52 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
	
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap();

	FragTrap&	operator=(FragTrap const & rhs);

	int		getSavedDamage() const;
	void	setSavedDamage(int	attackDamage);

	void	highFiveGuys();

	private:

	int	savedAttackDamage;
};