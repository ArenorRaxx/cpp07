/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:38:02 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/16 12:13:09 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "heads/iter.hpp"

int	main(void)
{
	std::string array[3] = {"Test", "super", "nice"};
	char const	string[5] = "0123";

	iter(array, 3, print<std::string>);
	iter(string, 4, print<const char>);
}