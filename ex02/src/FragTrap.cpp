/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:03:54 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 17:31:24 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << getName() << " I'm still alive, hi everyone" << std::endl;
}

FragTrap::~FragTrap(void) {
	if (getHitPoints() > 0)
		std::cout << getName() << " goodbye, everyone" << std::endl;
	else if (getHitPoints() <= 0)
		std::cout << getName() << " I can't say anything else, it's been a while" 
				  << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (target.empty() || getHitPoints() <= 0 || getEnergyPoints() <= 0) {
		std::cout << getName() << " can't do that!" << std::endl;
		return ;
	}
	_energyPoints = getEnergyPoints() > 0 ? getEnergyPoints() - 1: 0;
	std::cout << getName() << " I'll say hello " << target 
			  << "before I attack you with " << getAttackDamage() << " damage " 
			  << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << getName() << " high five guys 🙌" << std::endl;
}
