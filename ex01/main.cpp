/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:33:47 by epraduro          #+#    #+#             */
/*   Updated: 2024/09/04 19:26:01 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	
	try {
		
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

		std::cout << std::endl;
		
		Span big = Span(10000);

		std::vector<int> test;

		for (unsigned int i = 0; i < 10000; i++) {
			test.push_back(i);
		}
		big.someAddnum(test.begin(), test.end());

		std::cout << "shortestSpan: " << big.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << big.longestSpan() << std::endl;
		
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
}