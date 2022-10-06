/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 14:51:37 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		void operator=(FragTrap const &rhs);
		~FragTrap(void);
		void highFivesGuys(void);
};

#endif
