/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:43:52 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/21 21:20:41 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout	<< "DiamondTrap constructor called for " 
				<< this->_name
				<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap destructor called for " 
				<< this->_name
				<< std::endl;
}

void		DiamondTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout	<< "DiamondTrap " << this->_name
					<< " attacks " << target << ", causing "
					<< this->_attackDamage << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout	<< "DiamondTrap " << this->_name
					<< " has no energy points, try again! " 
					<< std::endl;
	}
}
