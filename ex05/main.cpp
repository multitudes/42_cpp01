/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:15:30 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:56:57 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

/**
 * @brief main
 * 
 * @return int
 * Test the Harl class passing different levels
 * of complaints.
 */
int main(void)
{
	Harl complainer;
	complainer.complain("DEBUG");
	complainer.complain("DEBUsG");
	complainer.complain("INFO");
	complainer.complain("WARNING");
	complainer.complain("ERROR");
	return 0;
}
