/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:32:24 by epraduro          #+#    #+#             */
/*   Updated: 2024/09/04 19:18:50 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {

	private:

		unsigned int _N;
		std::vector<int> _val;

	public:

		Span(unsigned int nb);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &copy);

		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();
		void	someAddnum(std::vector<int>::iterator start, std::vector<int>::iterator finish);
};