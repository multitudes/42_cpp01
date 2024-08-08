/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:12 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:51:59 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/**
 * @brief Construct a new HumanA::HumanA object
 * 
 * @param name
 * @param weapon
 * 
 * This huan always has a weapon. So I need to decide if a null weapon is allowed or not.
 * If not I need to throw an exception when null is passed in the constructor. I choose now 
 * to just display a message and continue.
 */
HumanA::HumanA(std::string name, Weapon& newWeapon) : name(name), weapon(newWeapon) {
	std::cout << this->name << " humanA has been created" << std::endl;
	return ;
}

/**
 * @brief Attack with the weapon
 * 
 * I need to consider that the weapon can be null. In this case I need to display a message.
 * This is because I have chosen to implement the class with a pointer to the weapon since
 * the weapon would usually outlive the human :)
 */
void HumanA::attack() const {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;

}
