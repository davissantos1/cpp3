/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:43:52 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 12:48:25 by dasimoes         ###   ########.fr       */
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
	std::cout	<< "FragTrap default destructor called for " 
				<< this->_name
				<< std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other )
{
	std::cout	<< "FragTrap copy constructor called" 
				<< std::endl;

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	std::cout	<< "FragTrap assignment operator called" 
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
				<< " requests positive high-fives from group!" 
				<< std::endl;
}
