/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:06 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:47:44 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/**
 * @brief Construct a new HumanB object
 * 
 * This human "sometimes" has a weapon
 * I use here the default constructor to initialize the weapon to NULL.
 */
HumanB::HumanB() : name(std::string()), weapon(NULL) {
	std::cout << "A humanB has been created" << std::endl;
	return ;
}

/**
 * @brief Construct a new HumanB object
 * 
 * @param name
 * 
 * This constructor takes a name.
 */
HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << this->name << " humanB has been created" << std::endl;
	return ;
}

/**
 * @brief Destroy the HumanB object
 * 
 * This destructor is empty because we don't need to do anything special since we dont 
 * own the weapon we do not need to destroy it
 */
void HumanB::attack() const {
	if (weapon)
		std::cout << name << " attacks with his " << this->weapon->getType() << std::endl;
	else 
		std::cout << name << " has no weapon" << std::endl;
}

/**
 * @brief Set the Weapon object
 * 
 * @param weapon
 * 
 * Essential setter for the weapon
 */
void HumanB::setWeapon(Weapon& newWeapon) {
	this->weapon = &newWeapon;
}
