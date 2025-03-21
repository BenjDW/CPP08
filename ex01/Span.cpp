/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:22:46 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/21 11:30:57 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	Span::addNumber(unsigned int nb)
{
	if (this->stock.size() >= this->stock.capacity())
		throw std::out_of_range("the Span is full");
	this->stock.push_back(nb);
}

// addNumber pour gere les range dans le vector
// void	Span::addNumber(range)
// {

// }

unsigned int	Span::longestSpan()
{
	unsigned int max = 0;
	unsigned int min = 0;
    std::vector<unsigned int>::iterator it;

	if (stock.size() < 2)
        throw std::runtime_error("Pas assez de nombres pour calculer un span.");
	it = stock.begin();
	min = *it;
    for (it = stock.begin(); it != stock.end(); ++it)
    {
        if (*it > max)
            max = *it;
        if (*it < min)
            min = *it;
    }
    return (max - min);
}

unsigned int	Span::shortestSpan()
{
	unsigned int result = 4294967295;
	unsigned int diff = 0;
	if (stock.size() < 2)
		throw std::runtime_error("Pas assez de nombres pour calculer un span.");
		
	for (std::vector<unsigned int>::iterator it = stock.begin(); it != stock.end() - 1; ++it)
	{
		diff = *(it + 1) - *it;
		if (diff < result)
			result = diff;
	}

	return result;
}

Span::Span(unsigned int n)
{
	stock.reserve(n);
}

Span::~Span()
{
}