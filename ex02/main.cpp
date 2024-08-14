/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <epraduro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:36:30 by epraduro          #+#    #+#             */
/*   Updated: 2024/08/14 13:52:48 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "\033[36m  MutantStack with std::stack  \033[0m" << std::endl;
	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "mstack.top(): " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "mstack.size(): " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) {
		std::cout << "*it: " << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack); 

	std::cout << "--------------------------------" << std::endl;
	std::cout << "\033[35m  MutantStack with std::list  \033[0m" << std::endl;
	
	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << "mlist.back(): " << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << "mlist.size(): " << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator it_list = mlist.begin();
	std::list<int>::iterator ite_list = mlist.end();

	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << "*it_list: " << *it_list << std::endl;
		++it_list;
	}
	return 0;
}
