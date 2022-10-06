/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/06/07 14:04:30 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor without name called with 10 hit points and 10 ernergy points." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " Constructor called with 10 hit points and 10 ernergy points." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

void ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " Destructor called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		ClapTrap	inst(target);
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
		inst.takeDamage(_attackDamage);
		_energyPoints = _energyPoints - 1;
		std::cout << "To attack, " << _name << " used 1 ernergy point and now has " << _energyPoints << " energy points left." << std::endl;
	}
	else
		std::cout << "Sorry, " << _name << " doesn't have enough points or energy to attack." << std::endl;
}
		
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount)
		_hitPoints = _hitPoints - amount;
	else
		_hitPoints = 0; 
	std::cout << _name << " has taken damage of " << amount << " points and now has " << _hitPoints << " hit points left." << std::endl;
}
		
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints = _energyPoints - 1;
		_hitPoints = _hitPoints + amount;
		std::cout << _name << " has been repaired with " << amount << " points and now has " << _hitPoints << " hit points left." << std::endl << "To be repaired, " << _name << " used 1 ernergy point and now has " << _energyPoints << " energy points left." << std::endl;
	}
	else
		std::cout << "Sorry, " << _name << " doesn't have enough points or energy to be repaired." << std::endl;
}

/*void ClapTrap::showStatus(void)
{
	std::cout << _name << "'s status:" << std::endl;
	std::cout << "            " << _name << "'s hit points = " << _hitPoints << std::endl;
	std::cout << "            " << _name << "'s energy points = " << _energyPoints << std::endl;
	std::cout << "            " << _name << "'s caused damage points = " << _attackDamage << std::endl;
}*/