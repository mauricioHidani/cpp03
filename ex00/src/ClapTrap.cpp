/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 19:50:17 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/15 20:01:20 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
}

ClapTrap::ClapTrap(const ClapTrap &other):
	_name(other.getName()), _hitPoints(other.getHitPoints()), 
	_energyPoints(other.getEnergyPoints()), _attackDamage(other.getAttackDamage()) {
}

ClapTrap::~ClapTrap(void) {
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
