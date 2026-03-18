/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:09:23 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 11:16:28 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	dt("Lionheart");

	dt.whoAmI();
	dt.attack("a bad guy");
	dt.takeDamage(15);
	dt.beRepaired(10);

	dt.guardGate();
	dt.highFivesGuys();

	std::cout << std::endl << "--* Stats *--" << std::endl;
	std::cout << dt << std::endl;

	return 0;
}
