/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 14:12:25 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		void operator=(ScavTrap const &rhs);
		~ScavTrap(void);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif
