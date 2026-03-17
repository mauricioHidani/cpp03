/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:32:06 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 15:47:01 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << getName() << " is alive and ready" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << getName();
	if (getHitPoints() > 0)
		std::cout << " is lyving there dead";
	else if (getHitPoints() <= 0)
		std::cout << " he's been dead for a long time";
	std::cout << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (target.empty() || getHitPoints() <= 0 || getEnergyPoints() <= 0) {
		std::cout << getName() << " can't do that!" << std::endl;
		return ;
	}
	_energyPoints = getEnergyPoints() > 0 ? getEnergyPoints() - 1: 0;
	std::cout << getName() << " attacks " << target 
			  << " took " << getAttackDamage() << " damage " << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << getName() << " is now working as a security guard" << std::endl;
}
