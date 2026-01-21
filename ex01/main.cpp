/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/21 20:05:54 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "Wrong usage, please type with no arguments:\n"
					<< "./scavTrap" 
					<< std::endl;
		return (1);
	}
	else
	{
		ScavTrap scav( "scav" );
		ClapTrap clappy( "clappy" );
		
		scav.attack( "clappy" );
		scav.guardGate();
		clappy.takeDamage( 20 );
		clappy.beRepaired( 2 );
	}
	return (0);
}
