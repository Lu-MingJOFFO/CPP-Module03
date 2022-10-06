/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 12:06:02 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		void operator=(ClapTrap const &rhs);
		~ClapTrap(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		
};

#endif