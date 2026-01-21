/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:43:52 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/21 20:23:12 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout	<< "FragTrap constructor called for " 
				<< this->_name
				<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap destructor called for " 
				<< this->_name
				<< std::endl;
}

void		FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout	<< "FragTrap " << this->_name
					<< " attacks " << target << ", causing "
					<< this->_attackDamage << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout	<< "FragTrap " << this->_name
					<< " has no energy points, try again! " 
					<< std::endl;
	}
}

void		FragTrap::highFivesGuys( void )
{
	std::cout	<< "FragTrap " << this->_name
				<< " requests a positive high-five from group!" 
				<< std::endl;
}
