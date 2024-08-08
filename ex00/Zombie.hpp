/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:25:16 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/07 11:01:05 by lbrusa           ###   ########.fr       */
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
		Zombie( const std::string name );

		// destructor
		~Zombie( void );
		
		// member functions
		void announce( void );
	
	private:
		const std::string name;
};

Zombie* newZombie( const std::string name );
void randomChump( const std::string name );

#endif  // ZOMBIE_HPP_
