/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:45:48 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:43:41 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Create a horde of zombies
 * 
 * @param N number of zombies
 * @param name name of the zombies
 * 
 * @return Zombie*
 * 
 * The way to create an array of objects is to use dynamic memory allocation.
 * but to instantiate the array i need the default constructor of the zombie class
 * which will be called first. then the assignment operator will be called to assign
 * the name to the zombies, destroying the previous object and substituting it with
 * the new one. 
 */
 Zombie *zombieHorde(  int N,  std::string name ) {

	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
	}
	return zombies;
}

/**
 * @brief Destroy the zombie horde
 * 
 * @param zombies
 * 
 * The delete[] operator is used to deallocate memory for arrays of objects.
 */
int destroyZombieHorde( Zombie* zombies ) {
	delete[] zombies;
	return 0;
}
