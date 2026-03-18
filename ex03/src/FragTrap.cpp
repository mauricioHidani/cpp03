/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:03:54 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 11:09:03 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << _name << " I'm still alive, hi everyone: FragTrap" << std::endl;
}

FragTrap::~FragTrap(void) {
	if (_hitPoints > 0)
		std::cout << _name << " goodbye, everyone" << std::endl;
	else if (_hitPoints <= 0)
		std::cout << _name << " I can't say anything else, it's been a while" 
				  << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (target.empty() || _hitPoints <= 0 || _energyPoints <= 0) {
		std::cout << _name << " can't do that!" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints > 0 ? _energyPoints - 1: 0;
	std::cout << _name << " I'll say hello " << target 
			  << "before I attack you with " << _attackDamage << " damage " 
			  << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << _name << " high five guys 🙌" << std::endl;
}
