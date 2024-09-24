/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:55:59 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 17:24:23 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unistd.h>
#include <climits>

class Span
{
	private:
		unsigned int N;
		std::vector<int> v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &s);
		Span	&operator=(const Span &s);
		~Span();

		void		addNumber(int number);
		unsigned int	shortestSpan();
		long	longestSpan();
	
	class fullContainer : public std::exception 
	{
		public:
			char const * what() const throw() 
			{
				return "Maximum amount reached";
			}
	};

	class impossibleSpan : public std::exception 
	{
		public:
			char const * what() const throw() 
			{
				return "Size of container is too low";
			}
	};
};




#endif