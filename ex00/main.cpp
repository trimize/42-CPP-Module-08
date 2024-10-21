/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:36:47 by trimize           #+#    #+#             */
/*   Updated: 2024/10/21 15:24:25 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>


int	main()
{
	std::vector<int>	list;

	list.push_back(8);
	list.push_back(0);
	list.push_back(1);
	list.push_back(5);
	list.push_back(9);
	list.push_back(2);
	list.push_back(4);
	list.push_back(3);
	list.push_back(6);
	list.push_back(7);
	list.push_back(10);
	
	std::cout << std::endl;
	std::vector<int>::iterator it = list.begin();
	while (it != list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	try
	{
		std::vector<int>::iterator x = easyfind(list, 6);
		std::cout << std::endl;
		std::cout << "Value of x : " << *x << std::endl;
		std::cout << "Position of x : " << std::distance(list.begin(), x) << std::endl << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::vector<int>::iterator x = easyfind(list, 944684);
		std::cout << "Value of x : " << *x << std::endl;
		std::cout << "Position of x : " << std::distance(list.begin(), x) << std::endl << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

}
