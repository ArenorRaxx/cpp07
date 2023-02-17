/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:25:50 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/17 12:04:10 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array
{
	private:
		size_t	_size;
		T 		*_data;

	public:
	//	Constructors

		Array(void): _size(0), _data(NULL)
		{
		}

		Array(Array const &to_copy)
		{
			*this = to_copy;
		}

		Array(unsigned int size)
		{
			this->_size = size;
			this->_data = new T[size]();
		}

	//	Destructor

		~Array(void)
		{
			delete[] this->_data;
		}

	//	Operators
		
		Array 	&operator = (Array const &to_set_to)
		{
			this->_size = size_t(to_set_to._size);
			if (this->_size == 0)
			{
				this->_data = NULL;
				return (*this);
			}
			this->_data = new T[this->_size]();
			*this->_data = *to_set_to._data;
			return (*this);
		}

		T		&operator[]	(int index)
		{
			if (this->_size == 0)
				throw EmptyArrayException();
			if (index < 0 || index >= (int)this->_size)
				throw OutOfRangeException();
			return (this->_data[index]);
		}
	
	//	Exceptions

		class	OutOfRangeException: public std::exception
		{
			char const	*what() const throw()
			{
				return ("Index out of Array index range.\n");
			}
		};

		class	EmptyArrayException: public std::exception
		{
			char const	*what() const throw()
			{
				return ("Array is empty. Cannot access element.\n");
			}
		};

	//	Methods

		size_t	size(void) const
		{
			return (this->_size);
		}
};

#endif