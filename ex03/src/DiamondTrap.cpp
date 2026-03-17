/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:01:26 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 18:21:07 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string bot_clap_name):
	ClapTrap(bot_clap_name), ScavTrap(bot_clap_name), FragTrap(bot_clap_name) {
}

DiamondTrap::~DiamondTrap(void) {
}

void	DiamondTrap::attack(const std::string &target) {
}
