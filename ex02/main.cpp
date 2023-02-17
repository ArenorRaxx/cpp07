/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/17 12:05:22 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "heads/Array.hpp"

int	main(void)
{
	Array<std::string>	useless;
	Array<int>			*array = new Array<int>(3);
	Array<int>			new_array = *array;

	(*array)[0] = 10;

	std::cout << "\t----\n";
	
	std::cout << "array[0]:\t" << (*array)[0] << "\n";
	std::cout << "new_array[0]:\t" << new_array[0] << "\n";

	std::cout << "\t----\n";
	
	std::cout << "array size:\t" << array->size() << ";\n";
	
	std::cout << "\t----\n";

	try	{
		std::cout << (*array)[4] << '\n';
	} catch(std::exception &error) {
		std::cout << "4: " << error.what();
	}

	std::cout << "\t----\n";
	
	try	{
		std::cout << useless[1];
	} catch(std::exception &error) {
		std::cout << error.what();
	}
		
	std::cout << "\t----\n";

	delete array;
	return (0);
}