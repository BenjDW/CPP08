/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 12:15:19 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/21 13:57:45 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ostream"
#include "iostream"
#include "exception"
#include <stack>
#include <deque>
#include <iostream>
#include <iterator>

// Implémentez une classe MutantStack. Elle sera implémentée en termes de la std::stack. 
// Elle offrira toutes ses fonctions membres avec en plus des itérateurs.

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &cpy);
		~MutantStack();
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator	begin();
		iterator	end();
		MutantStack operator=(MutantStack &cpy);
	private:
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
    return this->c.begin();
}




template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
