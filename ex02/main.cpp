/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:42:45 by trimize           #+#    #+#             */
/*   Updated: 2024/10/21 15:28:25 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << std::endl << std::endl;

	std::list<int> l;
	
	l.push_back(5);
	l.push_back(17);
	
	std::cout << l.back() << std::endl;

	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	
	std::list<int>::iterator itd = l.begin();
	std::list<int>::iterator itc = l.end();
	
	++itd;
	--itd;
	while (itd != itc)
	{
		std::cout << *itd << std::endl;
		++itd;
	}
	std::list<int> d(l);
	
	return 0;
}