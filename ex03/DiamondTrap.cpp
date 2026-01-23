/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:43:52 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/22 22:48:22 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	std::cout	<< "DiamondTrap constructor called for " 
				<< this->_name
				<< std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other._name + "_clap_name" )
{
	std::cout	<< "DiamondTrap copy constructor called" 
				<< std::endl;

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other )
{
	std::cout	<< "DiamondTrap assignment operator called" 
				<< std::endl;

	ClapTrap::_name = other._name + "_clap_name";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}

	return (*this);
}
	
DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap default destructor called for " 
				<< this->_name
				<< std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "I am a DiamondTrap named " 
				<< this->_name << " my ClapTrap name is "
				<< ClapTrap::_name
				<< std::endl;
}
