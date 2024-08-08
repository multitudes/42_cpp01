/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:25:31 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/07 10:46:28 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/**
 * @brief Construct a new Zombie object
 * 
 * @param name
 */
Zombie::Zombie( const std::string name ) : name(name) {
	std::cout << this->name << " has been created" << std::endl;
	return ;
}

/**
 * @brief Destroy the Zombie object
 */
Zombie::~Zombie( void ) {
	std::cout << this->name << " has been destroyed" << std::endl;
	return ;
}

/**
 * @brief Announce the Zombie object
 */
void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


/* ************************* extra functions *********************************** */

/**
 * @brief Create a new Zombie object
 * 
 * @param name
 * @return Zombie*
 * 
 * This function dynamically allocates memory for a new Zombie object and returns a pointer to it.
 * the memory needs to be freed by the caller.
 */
Zombie* newZombie( const std::string name ) {
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

/**
 * @brief Create a new Zombie object and announce it
 * 
 * @param name
 * 	
 * As per subject the ret value is void. Therefore the Zombie object is created 
 * and announced in the same function. A stack allocated Zombie object is created
 * but it doesnt matter since the object is destroyed after the function returns.
 */
void randomChump( const std::string name ) {
	Zombie a(name);
	a.announce();
	return ;
}