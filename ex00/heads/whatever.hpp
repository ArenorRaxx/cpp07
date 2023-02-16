/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:22:17 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/16 11:40:18 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T &a, T &b)
{
	T	c;
	
	c = a;
	a = b;
	b = c;
}

template <class T>
T max(T a, T b)
{
	return (a > b ? a : b);
}

template <class T>
T min(T a, T b)
{
	return (a < b ? a : b);
}

#endif