/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:54:09 by epraduro          #+#    #+#             */
/*   Updated: 2024/09/04 17:39:15 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Nooccurrencesfound : public std::exception
{
	public:
		const char *what() const throw() {
			return ("No occurrences found");
		}
};

template <typename T>
typename T::iterator	easyfind(T& a, int b)
{
	typename T::iterator it;
	
	it = std::find(a.begin(), a.end(), b);

	if (it == a.end())
		throw Nooccurrencesfound();
	return (it);
}