/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:02:20 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:58:12 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac == 2) {
		std::string complaint = av[1];
		Harl complainer;
		complainer.filter(complaint);
	} else {
		std::cerr << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
	}
	return 0;
}
