/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:41:15 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 17:23:56 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
	this->v.reserve(this->N);
}

Span::Span(unsigned int N)
{
	this->N = N;
	this->v.reserve(this->N);
}

Span::Span(const Span &s)
{
	this->N = s.N;
	this->v = s.v;
}

Span	&Span::operator=(const Span &s)
{
	this->N = s.N;
	this->v = s.v;
	return (*this);
}

Span::~Span()
{
	
}

void	Span::addNumber(int number)
{
	if (this->N <= 1)
		throw impossibleSpan();
	if (this->v.size() >= this->N)
		throw fullContainer();
	this->v.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	int	x;
	int	y;
	unsigned int	s_span;

	x = 0;
	y = 0;
	s_span = UINT_MAX;
	if (this->N <= 1)
		throw impossibleSpan();
	std::vector<int> tmp;
	tmp = this->v;
	sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size(); ++i)
	{
		x = tmp.at(i);
		if (i + 1 < tmp.size())
			y = tmp.at(i + 1);
		else
			break;
		if ((unsigned int)(y - x) < s_span)
			s_span = y - x;
	}
	return (s_span);
}

long	Span::longestSpan()
{
	if (this->N <= 1)
		throw impossibleSpan();
	std::vector<int> tmp;
	tmp = this->v;
	sort(tmp.begin(), tmp.end());
	long long int diff = static_cast<long>(tmp.back()) - static_cast<long>(tmp.front());
	return  (diff);
}
