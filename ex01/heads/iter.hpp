/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:58:00 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/16 12:13:02 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>

template <class T, typename F>
void	iter(T* array, size_t size_of_array, F function)
{
	size_t	index = 0;

	while (index < size_of_array)
	{
		function(array[index]);
		index++;
	}
}

template <typename T>
void	print(T to_print)
{
	std::cout << to_print << "\n";
}

#endif