/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:56:43 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/11 15:19:52 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base::~Base() {}

Base*	Base::generate(void) {

	int	randomNb = rand() % 3;
	Base*	base;

	if (randomNb == 0)
		return base = new A();	//implicit upcast
	else if (randomNb == 1)
		return base = new B();	//implicit upcast
	else if (randomNb == 2)
		return base = new C();	//implicit upcast
	else {
		std::cout << "random function failed" << std::endl;
		return NULL;
	}
}

void	Base::identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Base type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base type: C" << std::endl;
	else
		std::cout << "type is unknown" << std::endl;
}

void	Base::identify(Base& p) {
	
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Base type: A" << std::endl;
	}
	catch (std::exception &e) {
		try {
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Base type: B" << std::endl;
		}
		catch (std::exception &e) {
			try {
				C& c = dynamic_cast<C&>(p);
				std::cout << "Base type: C" << std::endl;
				(void)c;
				return;
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}

const char* Base::UnknownTypeException::what() const throw() {
	return "type is unknown";
}
