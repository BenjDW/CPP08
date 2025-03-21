/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:22:43 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/21 08:04:06 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Créez une classe Span pouvant stocker un maxium de N entiers. 
// N est une variable de type entier non-signé et sera le seul paramètre passé au constructeur.

// Cette classe aura une fonction membre appelée addNumber() afin d’ajouter un seul
// nombre à la Span. 
// On l’utilisera pour remplir cette dernière. Toute tentative d’ajouter un nouvel élément s’il y en a déjà N autres stockés jettera une exception.

// Ensuite, implémentez deux fonctions membres : shortestSpan() et longestSpan()
// Elles devront respectivement trouver la plus petite distance et la plus grande distance
// entre les nombres stockés, puis la retourner.
// S’il n’y a aucun nombre stocké, ou juste un aucune distance ne peut être trouvée. 
// Par conséquent, jetez une exception.

// Bien sûr, implémentez vos propres tests qui devront être bien plus complets que celui
// donné ci-dessous. 
// Testez votre Span avec au moins 10 000 nombres. Vous pouvez tester avec plus de nombres, c’est encore mieux.

#pragma once
#include <vector>
#include <ostream>
#include <iostream>
#include <exception>

class Span
{
	public:
		Span(unsigned int n);
		~Span();
		void 			addNumber(unsigned int nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	private:
		std::vector<unsigned int>	stock;
};

