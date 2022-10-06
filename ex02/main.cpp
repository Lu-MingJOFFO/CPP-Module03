/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:21:54 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 14:57:24 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{
	FragTrap	me("Pim");
	std::cout << std::endl;
	
	me.takeDamage(30);
	std::cout << std::endl;
	
	me.beRepaired(3);
	std::cout << std::endl;

	ClapTrap	inst("Lulu");
	std::cout << std::endl;
	
	inst.attack("Pam");
	std::cout << std::endl;
	
	me.attack("Pam");
	std::cout << std::endl;
	
	me.takeDamage(95);
	std::cout << std::endl;
	
	me.attack("Poum");
	std::cout << std::endl;

	me.beRepaired(2);
	std::cout << std::endl;

	me.highFivesGuys();
	std::cout << std::endl;
	
	return 0;
}
	
