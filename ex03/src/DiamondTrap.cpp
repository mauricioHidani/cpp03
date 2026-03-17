/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:01:26 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 18:09:01 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _clap_name):
	ScavTrap(_clap_name), FragTrap(_clap_name) {
}

DiamondTrap::~DiamondTrap(void) {
}

void	DiamondTrap::attack(const std::string &target) {
}
