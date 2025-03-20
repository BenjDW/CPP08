/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:47:25 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/20 06:44:32 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
	std::vector<int>::iterator it;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    try
    {
        it = easyfind(vec, 2);
        std::cout << "Valeur trouvée : " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception : " << e.what() << std::endl;
    }
}