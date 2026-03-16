/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 09:02:17 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/16 10:40:28 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	warriors[5] = {
		ClapTrap("Joana d'Arc"), 
		ClapTrap("Salah ad-Din"), 
		ClapTrap("Richard The Lionheart"), 
		ClapTrap("William Wallace"), 
		ClapTrap("Henry Of Monmouth")
	};

	std::cout << std::endl << "--* Clap Trap init *--" << std::endl;

	warriors[0].setAttackDamage(26);
	warriors[1].setAttackDamage(30);
	warriors[2].setAttackDamage(42);
	warriors[3].setAttackDamage(31);
	warriors[4].setAttackDamage(25);

	std::cout << "Warriors Status" << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << warriors[i] << std::endl;
	std::cout << std::endl;

	warriors[0].beRepaired(2);

	warriors[1].attack(warriors[2].getName());
	warriors[2].takeDamage(warriors[1].getAttackDamage());

	warriors[4].attack(warriors[3].getName());
	warriors[3].takeDamage(warriors[4].getAttackDamage());

	std::cout << "Warriors Status" << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << warriors[i] << std::endl;
	std::cout << std::endl;
		
	return 0;
}
