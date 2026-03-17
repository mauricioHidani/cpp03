/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 19:50:17 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 15:08:24 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << getName() << " is alive" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):
	_name(other.getName()), _hitPoints(other.getHitPoints()), 
	_energyPoints(other.getEnergyPoints()), 
	_attackDamage(other.getAttackDamage()) {
	std::cout << getName() 
			  << " is alive and has the same attributes as " << other.getName() 
			  << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << getName();
	if (getHitPoints() > 0)
		std::cout << " is dead";
	else if (getHitPoints() <= 0)
		std::cout << " is decomposing";
	std::cout << std::endl;
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

void	ClapTrap::setAttackDamage(const int amount) {
	if (amount < 0)
		return ;
	_attackDamage = amount;
}

void	ClapTrap::attack(const std::string &target) {
	if (target.empty() || getHitPoints() <= 0 || getEnergyPoints() == 0) {
		std::cout << getName() << " can't do that!" << std::endl;
		return ;
	}
	_energyPoints = getEnergyPoints() > 0 ? getEnergyPoints() - 1: 0;
	std::cout << getName() << " attacks " << target << ", "
			  << "causing " << getAttackDamage() << " points of damage"
			  << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0) {
		std::cout << getName() << " is dead, can't take any more damage"
				  << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << getName() << " suffered damage from " 
			  << amount << " points "
			  << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (amount <= 0 || getEnergyPoints() <= 0) {
		std::cout << getName() << " can't do that!\n";
		return ;
	}
	_hitPoints += amount;
	_energyPoints = getEnergyPoints() > 0 ? getEnergyPoints() - 1: 0;
	std::cout << getName() << " has regained his health in " 
			  << amount << " points"
			  << std::endl;
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

std::ostream	&operator<<(std::ostream &out, const ClapTrap &obj) {
	out << "{ "
		<< "\"Name\": \"" << obj.getName() << "\", "
		<< "\"Hit Points\": " << obj.getHitPoints() << ", "
		<< "\"Energy Points\": " << obj.getEnergyPoints() << ", "
		<< "\"Attack Damage\": " << obj.getAttackDamage()
		<< " }";
	return out;
}
