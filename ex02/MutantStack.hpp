/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:23:52 by trimize           #+#    #+#             */
/*   Updated: 2024/09/24 12:46:34 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public :
		MutantStack() : MutantStack<T, Container>::stack() {}
		MutantStack(MutantStack<T, Container> &ms) : MutantStack<T, Container>::stack(ms) {}
		MutantStack<T, Container>	&operator=(const MutantStack<T, Container> &ms) 
		{
			if (this != &ms)
				this->MutantStack<T, Container>::stack::operator=(ms);
			return (*this);
		}

		virtual ~MutantStack() {}

		typedef typename Container::iterator	iterator;

		iterator	begin(){return this->c.begin();};
		iterator	end(){return this->c.end();};
};

#endif