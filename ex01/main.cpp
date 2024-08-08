/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:50:21 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:42:13 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

/**
 * @brief Create a horde of Zombies
 */
int main()
{
	int n = 3;
	Zombie *zombies = zombieHorde(n, "little zombie");
	for (int i = 0; i < n; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;
}
