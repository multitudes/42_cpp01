/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:50:30 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:43:04 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/**
 * @brief Zombie class
 * 
 */
class Zombie {
	public:
		// constructor
		Zombie();
		Zombie( const std::string name );

		// destructor
		~Zombie( void );
		
		// member functions
		void announce( void );
		void setName( const std::string name );
	
	private:
		std::string _name;
};

Zombie *zombieHorde(  int N,  std::string name );

#endif  // ZOMBIE_HPP_
