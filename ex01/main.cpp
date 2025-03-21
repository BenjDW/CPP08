/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:22:48 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/21 12:10:32 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	// range methode subject
	Span mySpan(10);
    std::vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);

    mySpan.addNumbers(nums.begin(), nums.end());
	std::cout << "range methode" << std::endl;
	std::cout << "smallest between 2 value : " << mySpan.shortestSpan() << std::endl;
	std::cout << "highest between 2 value : " << mySpan.longestSpan() << std::endl;
	std::cout << std::endl;
	// classic methode subject
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "classic methode" << std::endl;
	std::cout << "smallest between 2 value : " << sp.shortestSpan() << std::endl;
	std::cout << "highest between 2 value : " << sp.longestSpan() << std::endl;

	return 0;
}
