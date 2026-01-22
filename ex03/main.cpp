/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/21 20:24:18 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
		FragTrap frag( "frag" );

		frag.attack( "scav" );
		scav.takeDamage( 30 );
		scav.attack( "clappy" );
		scav.guardGate();
		frag.highFivesGuys();
		clappy.takeDamage( 20 );
		clappy.beRepaired( 2 );
	}
	return (0);
}
