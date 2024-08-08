/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:54:09 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:50:39 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

/**
 * @brief This human "always" has a weapon
 * 
 * I removed the default constructor because I want to force the user 
 * to always provide a weapon.
 * 
 */
class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack() const;
	
	private:
		std::string name;
		Weapon &weapon;	
};

#endif
