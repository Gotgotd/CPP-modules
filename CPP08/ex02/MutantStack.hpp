/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:46:02 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/23 16:10:32 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {


	public:
	MutantStack(): std::stack<T>() {}
	MutantStack(MutantStack const& copy): std::stack<T>(copy) {}
	~MutantStack() {}

	typedef typename std::deque<T>::iterator	iterator;
	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
};

#endif