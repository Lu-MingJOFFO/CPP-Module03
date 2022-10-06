/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 14:14:51 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)//: ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "ScavTrap default constructor without name called with 100 hit points, 50 ernergy points and attacks will cause 20 points damage." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << _name << " ScavTrap constructor called with 100 hit points, 50 ernergy points and attacks will cause 20 points damage." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

void ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << _name << " ScavTrap destructor called." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		ClapTrap	inst(target);
		std::cout << _name << " ScavTrap attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
		inst.takeDamage(_attackDamage);
		_energyPoints = _energyPoints - 1;
		std::cout << "To attack, " << _name << " ScavTrap used 1 ernergy point and now has " << _energyPoints << " energy points left." << std::endl;
	}
	else
		std::cout << "Sorry, " << _name << " ScavTrap doesn't have enough points or energy to attack." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << _name << " ScavTrap has entered Gate keeper mode." << std::endl;
}