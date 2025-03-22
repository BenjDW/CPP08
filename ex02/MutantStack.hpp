/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 12:15:19 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/22 06:08:24 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ostream>
#include <iostream>
#include <exception>
#include <stack>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>

// Implémentez une classe MutantStack. Elle sera implémentée en termes de la std::stack. 
// Elle offrira toutes ses fonctions membres avec en plus des itérateurs.

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &cpy);
		~MutantStack();
		typedef typename std::stack<T>::container_type::iterator 				iterator;
		typedef	typename std::stack<T>::container_type::const_iterator 			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator 	const_reverse_iterator;
		iterator				begin();
		iterator				end();
		const_iterator			cbegin();
		const_iterator			cend();
		reverse_iterator		rbegin();
		reverse_iterator		rend();
		const_reverse_iterator	crbegin();
		const_reverse_iterator	crend();
		MutantStack operator=(MutantStack &cpy);
	private:
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() 
{
    return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend()
{
	return (this->c.cend());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() 
{
    return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() 
{
    return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend()
{
	return (this->c.rend());
}

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &cpy) : std::stack<T>(cpy)
{
}

template <typename T>
MutantStack<T> MutantStack<T>::operator=(MutantStack &cpy)
{
	if (this != &cpy)
		std::stack<T>::operator=(cpy);
	return (*this);
} 
