/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:36:23 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:57:08 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>
#include <string>

/**
 * @brief Harl class
 * 
 * The goal is to use pointers to member functions. We cannot use a map because
 * we are not allowed to use the STL. So we use an array of function pointers.
 */
class Harl {
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );

	private:
		typedef void (Harl::*MethodPointer)();
		std::string levels[4];
		MethodPointer methods[4];
		
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif
