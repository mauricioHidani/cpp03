/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:01:26 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 11:04:26 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();

	std::cout << _name << " I'm totally alive: DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
	ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
	_hitPoints = other.getHitPoints();
	_energyPoints = other.getEnergyPoints();
	_attackDamage = other.getAttackDamage();

	std::cout << _name << " is alive and copied" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << _name << " is dying as a DiamondTrap" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "My DiamondTrap name is " << _name
		<< " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDamage = other.getAttackDamage();
	}
	return *this;
}
