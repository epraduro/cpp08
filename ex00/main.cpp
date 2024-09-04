/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:54:05 by epraduro          #+#    #+#             */
/*   Updated: 2024/09/04 17:46:48 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	
	std::vector<int> vec;
	vec.push_back(7);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	int valueToFind = 6;
	int valueToFind2 = 7;

	std::vector<int>::iterator index;
	std::vector<int>::iterator index2;

	try {
		index = easyfind(vec, valueToFind);
		std::cout << "Element found: " << *index << std::endl;
		index2 = easyfind(vec, valueToFind2);
		std::cout << "Element found: " << *index2 << std::endl;
	}	catch(Nooccurrencesfound &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}