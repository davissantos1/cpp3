/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:00:41 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 13:24:36 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other );
		FragTrap&	operator=( const FragTrap& other );
		virtual ~FragTrap();
		virtual void	attack( const std::string& target );
		virtual void	highFivesGuys(void);
};

#endif
