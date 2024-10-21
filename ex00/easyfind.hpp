/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:28:59 by trimize           #+#    #+#             */
/*   Updated: 2024/10/21 15:12:57 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class NotFound : public std::exception
{
	public:
		char const * what() const throw()
		{
			return "Integer not found inside the container.";
		}
};

template <typename T>

typename T::iterator	easyfind(T	&container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end() && n != *it)
		throw NotFound();
	return it;
}

#endif