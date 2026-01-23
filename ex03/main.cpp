/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 14:59:16 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "Wrong usage, please type with no arguments:\n"
					<< "./diamondTrap" 
					<< std::endl;
		return (1);
	}
	else
	{
		DiamondTrap diamond( "diamond" );
		ScavTrap scav( "scav" );
		ClapTrap clappy( "clappy" );
		FragTrap frag( "frag" );
		DiamondTrap clone( diamond );
		DiamondTrap test;
	
		test = clone;

		diamond.whoAmI();
		diamond.attack( "clappy" );
		diamond.highFivesGuys();
		diamond.guardGate();

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
