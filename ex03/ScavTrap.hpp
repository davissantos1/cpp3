/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:00:41 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/22 19:29:20 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& other );
		ScavTrap&	operator=( const ScavTrap& other );
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
