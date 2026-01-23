/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:43:52 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 12:46:25 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout	<< "ScavTrap name constructor called for " 
				<< this->_name
				<< std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other )
{
	std::cout	<< "ScavTrap assignment operator called" 
				<< std::endl;
	
	if (this != &other)
	{
		ClapTrap::operator=( other );
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}

	return (*this);
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other )
{
	std::cout	<< "ScavTrap copy constructor called" 
				<< std::endl;

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap default destructor called for " 
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
		std::string message = (this->_energyPoints > 0) ? "hit" : "energy";

		std::cout	<< "ScavTrap " << this->_name
					<< " has no " << message << "points!"
					<< std::endl;
	}
}

void		ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap " << this->_name
				<< " is in Gate keeper mode!" 
				<< std::endl;
}
