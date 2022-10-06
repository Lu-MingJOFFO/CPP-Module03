/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:21:54 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 15:00:02 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) 
{
	ClapTrap	me("Pim");
	std::cout << std::endl;
	
	me.takeDamage(6);
	std::cout << std::endl;
	
	me.beRepaired(3);
	std::cout << std::endl;
	
	me.attack("Pam");
	std::cout << std::endl;
	
	me.takeDamage(8);
	std::cout << std::endl;
	
	me.attack("Poum");
	std::cout << std::endl;

	me.beRepaired(2);
	std::cout << std::endl;

	return 0;
}
	
