/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:53:53 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:47:02 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "A weapon has been created" << std::endl;
	return ;
}

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "A " << this->type << " has been created" << std::endl;
	return ;
}

Weapon::~Weapon() {
	std::cout << "A " << this->type << " has been destroyed" << std::endl;
	return ;
}

std::string Weapon::getType() {
	return (this->type);
}

void Weapon::setType(std::string weapontype) {
	this->type = weapontype;
}
