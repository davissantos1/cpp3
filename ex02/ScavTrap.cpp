/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:43:52 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/21 18:48:12 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout	<< "ScavTrap constructor called for " 
				<< this->_name
				<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap destructor called for " 
				<< this->_name
				<< std::endl;
}

void		ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout	<< "ScavTrap " << this->_name
					<< " attacks " << target << ", causing "
					<< this->_attackDamage << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->_name
					<< " has no energy points, try again! " 
					<< std::endl;
	}
}

void		ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap " << this->_name
				<< " is in Gate keeper mode!" 
				<< std::endl;

}
