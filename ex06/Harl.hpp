/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:36:23 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:58:05 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		// constructor
		Harl( void );
		~Harl( void );
		void complain( std::string level );
		void filter( std::string level );
		
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
