/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 19:50:17 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/15 22:04:59 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << getName() << " is alive" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):
	_name(other.getName()), _hitPoints(other.getHitPoints()), 
	_energyPoints(other.getEnergyPoints()), _attackDamage(other.getAttackDamage()) {
	std::cout << getName() 
			  << " is alive and has the same characteristics as " 
			  << other.getName() 
			  << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << getName() << " is dead" << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return _name;
}

int	ClapTrap::getHitPoints(void) const {
	return _hitPoints;
}

int	ClapTrap::getEnergyPoints(void) const {
	return _energyPoints;
}

int ClapTrap::getAttackDamage(void) const {
	return _attackDamage;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap "
			  << getName() 
			  << " attacks "
			  << target
			  << ", causing "
			  << getAttackDamage()
			  << " points of damage!"
			  << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount < 0)
	{
		std::cout << "It cannot cause harm" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	_attackDamage = amount;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (amount <= 0) {
		return ;
	}
	_hitPoints += amount;
	_attackDamage = 0;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDamage = other.getAttackDamage();
	}
	return *this;
}
