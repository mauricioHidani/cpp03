/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:01:37 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 17:55:17 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	FragTrap	*goodGuy = new FragTrap("Freddie Mercury");
	ScavTrap	guard("Joana d'Arc");
	ClapTrap	warrior("Richard The Lionheart");

	std::cout << std::endl << "--* Character Status *--" << std::endl;
	std::cout << *goodGuy << std::endl;
	std::cout << guard << std::endl;
	std::cout << warrior << std::endl;
	std::cout << std::endl;

	goodGuy->attack(warrior.getName());
	goodGuy->highFivesGuys();
	warrior.takeDamage(goodGuy->getAttackDamage());

	guard.attack(warrior.getName());
	warrior.takeDamage(guard.getAttackDamage());

	std::cout << std::endl << "--* Character Status *--" << std::endl;
	std::cout << *goodGuy << std::endl;
	std::cout << guard << std::endl;
	std::cout << warrior << std::endl;
	std::cout << std::endl;

	delete goodGuy;

	return 0;
}
