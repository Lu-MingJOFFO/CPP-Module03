/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 14:53:09 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)//: ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "FragTrap default constructor without name called with 100 hit points, 100 ernergy points and attacks will cause 30 points damage." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << _name << " FragTrap constructor called with 100 hit points, 100 ernergy points and attacks will cause 30 points damage." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

void FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << " FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " FragTrap asks to high fives." << std::endl;
}