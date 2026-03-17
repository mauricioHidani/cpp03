/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:33:42 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 15:55:27 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	*knight = new ClapTrap("Richard The Lionheart");
	ClapTrap	*guard = new ScavTrap("Joana d'Arc");
	ClapTrap	recruit(*guard);
	ScavTrap	warrior("Henry Of Monmouth");

	knight->setAttackDamage(45);

	std::cout << std::endl << "--* Character Status *--" << std::endl;
	std::cout << *knight << std::endl;	// type = ClapTrap
	std::cout << *guard << std::endl;	// type = ScavTrap
	std::cout << recruit << std::endl;	// type = ClapTrap
	std::cout << warrior << std::endl;	// type = ScavTrap
	std::cout << std::endl;

	knight->attack(recruit.getName());				// type = ClapTrap
	recruit.takeDamage(knight->getAttackDamage());	// type = ClapTrap

	recruit.attack(warrior.getName());				// type = ClapTrap
	warrior.takeDamage(recruit.getAttackDamage());	// type = ScavTrap

	guard->attack(warrior.getName());				// type = ScavTrap
	warrior.takeDamage(guard->getAttackDamage());	// type = ScavTrap

	std::cout << std::endl << "--* Character Status *--" << std::endl;
	std::cout << *knight << std::endl;	// type = ClapTrap
	std::cout << *guard << std::endl;	// type = ScavTrap
	std::cout << recruit << std::endl;	// type = ClapTrap
	std::cout << warrior << std::endl;	// type = ScavTrap
	std::cout << std::endl;

	delete guard;
	delete knight;
	
	return 0;
}
