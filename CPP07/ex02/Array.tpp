/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:00:30 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/23 14:36:59 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stdexcept>

template<typename T>
class Array {

	private:
	T*				_array;
	unsigned int	_size;

	public:
	Array(): _array(NULL), _size(0) {}

	Array(unsigned int n): _array(new T[n]()), _size(n) {}

	Array(Array const& copy): _array(NULL), _size(0){
		*this=copy;
	}

	~Array() {
		delete [] _array;
	}

	Array&	operator=(Array const& rhs) {
		if (this != &rhs) {
			if (_array)
				delete [] _array;
			this->_size = rhs.size();
			this->_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs.getArray()[i];
		}
		return *this;
	}

	T*	getArray() const {
		return this->_array;
	}

	T&	operator[](unsigned int i) {
		if (i >= _size || i < 0)
			throw std::out_of_range("index for this array is out of range");
		return _array[i];
	}

	unsigned int	size() const {return _size;}
};