/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:24:55 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/05 11:22:23 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Create a new Zombie object on the heap and on the stack
 * 
 */
int main(void) {

	// on the stack
	Zombie brainy = Zombie("Brainy");
	brainy.announce();
	Zombie chumpy = Zombie("Chumpy");
	chumpy.announce();

	// with dynamic allocation
	Zombie *a = newZombie("newZombie a dynamic");
	a->announce();

	// special case, it will not survive the function scope
	randomChump("Chumpy");

	// free the dynamic allocated memory
	delete a;

	return (0);
}