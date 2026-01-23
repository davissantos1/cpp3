/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 11:50:00 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap( const std::string& name ):
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout	<< "ClapTrap name constructor called for "
				<< name
				<< std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout	<< "ClapTrap copy constructor called"
				<< std::endl;

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "ClapTrap default destructor called for "
				<< this->_name
				<< std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	std::cout	<< "ClapTrap assignment operator called"
				<< std::endl;

	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}

	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout	<< "ClapTrap " << this->_name
					<< " attacks " << target << ", causing "
					<< this->_attackDamage << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::string message = (this->_energyPoints > 0) ? "hit" : "energy";

		std::cout	<< "ClapTrap " << this->_name
					<< " has no " << message << " points!" 
					<< std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << this->_name
				<< " receives " << amount << " points of damage!"
				<< std::endl;
	if (this->_hitPoints - (int) amount < 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout	<< "ClapTrap " << this->_name
					<< " repairs itself for "  << amount 
					<< " hit points!"
					<< std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
	{
		std::string message = (this->_energyPoints > 0) ? "hit" : "energy";

		std::cout	<< "ClapTrap " << this->_name
					<< " has no " << message << " points!" 
					<< std::endl;
	}
}
