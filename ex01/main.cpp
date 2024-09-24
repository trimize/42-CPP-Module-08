/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:47:19 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 17:29:39 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Span.hpp"

int generateRandomInt() {
	int rand1 = rand();
	int rand2 = rand();
	int combined = (rand1 << 15) | rand2;
	if (rand() % 2 == 0)
		return combined % (INT_MAX);
	else
		return INT_MIN + (combined % (-(INT_MIN + 1)));
}

int	main()
{
	std::cout << std::endl;
	std::cout << "10000 numbers in between INT_MAX and INT MIN" << std::endl << std::endl;
	std::cout << "--------------------------------------------" << std::endl << std::endl;

	Span	s(10000);
	srand(time(0));
	for (unsigned int i = 0; i < 10000; ++i)
	{
		try
		{
			s.addNumber(generateRandomInt());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}		
	}
	std::cout << "Longest Span : " << s.longestSpan() << std::endl << std::endl;
	std::cout << "Shortest Span : " << s.shortestSpan() << std::endl << std::endl;

	std::cout << "Trying specific stuff for better monitoring" << std::endl << std::endl;
	std::cout << "--------------------------------------------" << std::endl << std::endl;
	std::cout << "1. ";
	Span	t;

	try
	{
		t.addNumber(0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	Span	r(10);
	
	std::cout << "2. Longest Spen expected : 15" << std::endl << "   Shortest Span expected : 1";

	r.addNumber(-5);
	r.addNumber(2);
	r.addNumber(3);
	r.addNumber(8);
	r.addNumber(10);
	r.addNumber(-2);
	r.addNumber(6);
	r.addNumber(9);
	r.addNumber(1);
	r.addNumber(-4);

	std::cout << "   Longest Span : " << r.longestSpan() << std::endl << std::endl;
	std::cout << "   Shortest Span : " << r.shortestSpan() << std::endl << std::endl;
}