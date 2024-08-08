/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:50:27 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:43:34 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Construct a new Zombie::Zombie object
 * 
 * @param name
 * 
 * A default constructor is always needed in the case of arrays of objects.
 */
Zombie::Zombie() : _name("") {
	std::cout << "A unnamed zombie has been created" << std::endl;
	return ;
}

/**
 * @brief Construct a new Zombie::Zombie object
 * 
 * @param name
 */
Zombie::Zombie( const std::string name ) : _name(name) {
	std::cout << this->_name << " has been created" << std::endl;
	return ;
}

/**
 * @brief Destroy the Zombie::Zombie object
 */
Zombie::~Zombie( void ) {
	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

/**
 * @brief Announce the Zombie::Zombie object
 */
void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


/**
 * @brief Set the name of the Zombie::Zombie object
 */
void Zombie::setName( const std::string name ) {
	this->_name = name;
	return ;
}
