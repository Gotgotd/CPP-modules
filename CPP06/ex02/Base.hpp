/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:10:03 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/11 11:46:25 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Base {

	public:

	virtual ~Base();

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

	class UnknownTypeException : public std::exception {
		public:
		virtual const char* what() const throw();
	};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif