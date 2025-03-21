/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:22:46 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/21 08:03:42 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	Span::addNumber(unsigned int nb)
{
	if (this->stock.size() >= this->stock.capacity())
		throw std::out_of_range("the Span is full");
	this->stock.push_back(nb);
}

unsigned int	Span::longestSpan()
{
	unsigned int max = 0;
	unsigned int before_max = 0;
    std::vector<unsigned int>::iterator it;

	if (stock.size() < 2)
        throw std::runtime_error("Pas assez de nombres pour calculer un span.");

    for (it = stock.begin(); it != stock.end(); ++it)
    {
        if (*it > max)
        {
            before_max = max;
            max = *it;
        }
        else if (*it > before_max)
        {
            before_max = *it;
        }
    }
    return (max - before_max);
}


unsigned int	Span::shortestSpan()
{
	std::vector<unsigned int>::iterator	it;
	unsigned int	smallest = 0;
	unsigned int	max = 0;

	if (stock.size() < 2)
        throw std::runtime_error("Pas assez de nombres pour calculer un span.");

	for (it = stock.begin(); it != stock.end(); ++it)
    {
		if (*it < smallest)
        	smallest = *it;
        if (*it > max)
            max = *it;
	}
	return (max - smallest);
}

Span::Span(unsigned int n)
{
	stock.reserve(n);//reserve n emplacement
}

Span::~Span()
{
}