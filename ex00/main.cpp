/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:36:47 by trimize           #+#    #+#             */
/*   Updated: 2024/09/13 17:54:43 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <set>


int	main()
{
	std::set<int>		list;
	
	std::cout << std::endl;
	int i = 0;
	while (i < 10)
	{
		list.insert(i++);
		std::cout << *list.end() << " ";
	}
	std::cout << std::endl;
	std::set<int>::iterator x = easyfind(list, 6);

	std::cout << std::endl;
	std::cout << "Value of x : " << *x << std::endl << std::endl;
	

	x = easyfind(list, 984789);

	std::cout << "Value of x : " << *x << std::endl << std::endl;
}
