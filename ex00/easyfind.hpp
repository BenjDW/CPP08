/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 03:47:14 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/23 06:56:33 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <iomanip>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>

template<typename T>
typename T::iterator easyfind(T& container, int nb)
{
    typename T::iterator it = std::find(container.begin(), container.end(), nb);
    
    if (it == container.end())
        throw std::runtime_error("Aucune occurrence trouvée");
    
    return it;
}