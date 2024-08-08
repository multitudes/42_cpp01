/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:36:26 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:58:22 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/**
 * @brief Harl constructor
 */
Harl::Harl( void ) {
	methods[0] = &Harl::debug;
	methods[1] = &Harl::info;
    methods[2] = &Harl::warning;
    methods[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	
	return ;
}

/**
 * @brief Harl destructor
 */
Harl::~Harl( void ) {
	return ;
}
/**
 * @brief public complain methods
 */
void Harl::complain( std::string level ) {
	for (int i = 0; i < 4; i++) {
		
		if (level == levels[i]) {
			(this->*methods[i])();
			return ;
		}
	}
	return ;
}

/**
 * @brief public filter methods
 * 
 * @param level 
 * Filter the complaint based on the level and printing the 
 * corresponding message and all messages above it.
 * If the level is unknown, print a default message ignoring
 * the complaint...
 */
void Harl::filter( std::string level ) {
	int index = -1;
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			index = i;
			break;
		}
	}
	switch (index) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			complain("INFO");
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;		
	}

	return ;
}

/**
 * @brief private complain methods follow
 */
void Harl::debug( void ) {
	std::string complaint = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	std::cout << complaint << std::endl;
	return ;
}

void Harl::info( void ) {
	std::string complaint = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	std::cout << complaint << std::endl;
	return ;
}

void Harl::warning( void ) {
	std::string complaint = "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
	std::cout << complaint << std::endl;
	return ;
}

void Harl::error( void ) {
	std::string complaint = "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << complaint << std::endl;
	return ;
}
