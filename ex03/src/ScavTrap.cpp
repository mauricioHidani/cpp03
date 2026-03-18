/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:32:06 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 11:14:34 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << _name << " is alive and ready: ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << _name;
	if (_hitPoints > 0)
		std::cout << " is lyving there dead";
	else if (_hitPoints <= 0)
		std::cout << " he's been dead for a long time";
	std::cout << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (target.empty() || _hitPoints <= 0 || _energyPoints <= 0) {
		std::cout << _name << " can't do that!" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints > 0 ? _energyPoints - 1: 0;
	std::cout << _name << " attacks " << target 
			  << " took " << _attackDamage << " damage " << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << _name << " is now working as a security guard" << std::endl;
}
