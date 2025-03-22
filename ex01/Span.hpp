/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:22:43 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/22 07:06:57 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <ostream>
#include <iostream>
#include <exception>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &cpy);
		~Span();
		Span &operator=(const Span &cpy);
		void 			addNumber(unsigned int nb);
		void			addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	private:
		std::vector<unsigned int>	stock;
		Span();
};