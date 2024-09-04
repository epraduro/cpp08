/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:01:01 by epraduro          #+#    #+#             */
/*   Updated: 2024/09/04 19:21:36 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nb): _N(nb) {
}

Span::~Span() {
}

Span::Span(const Span &copy) {
	
	std::cout << "Span copy constructor called" << std::endl;
	*this = copy;
}

Span &Span::operator=(const Span &copy) {

	std::cout << "Span assignation operator called" << std::endl;
	this->_N = copy._N;
	this->_val = copy._val;
	return (*this);
}

void	Span::addNumber(int nb) {

	if (this->_val.size() == this->_N)
		throw std::overflow_error("Too much numbers");
	this->_val.push_back(nb);
}

int		Span::shortestSpan() {
	
	int diff;
	
	if (this->_val.size() <= 1)
		throw std::overflow_error("Not enough number");

	std::vector<int> tmp = this->_val;
	
	int min = *std::min_element(tmp.begin(), tmp.end());
	tmp.erase(std::min_element(tmp.begin(), tmp.end()));
	int min2 = *std::min_element(tmp.begin(), tmp.end());
	
	diff = min2 - min;
	
	return diff;
}

int		Span::longestSpan() {
	
	int diff;
	
	if (this->_val.size() <= 1)
		throw std::overflow_error("Not enough number");
	
	int min = *std::min_element(this->_val.begin(), this->_val.end());
	int max = *std::max_element(this->_val.begin(), this->_val.end());

	diff = max - min;

	return diff;
}

void	Span::someAddnum(std::vector<int>::iterator start, std::vector<int>::iterator finish) {
	
	for (std::vector<int>::iterator i = start; i != finish; i++)
		this->addNumber(*i);
}
