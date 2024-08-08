/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:03 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:46:18 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

/**
 * @brief This human can have a weapon or not
 * 
 */
class HumanB
{	
	public:
		HumanB();
		HumanB(std::string name);
		void		setWeapon(Weapon& weapon);
		void		attack() const;

	private:
		std::string	name;
		Weapon 		*weapon;
};

#endif
