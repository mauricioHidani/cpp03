/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:01:38 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 18:08:23 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap: public FragTrap, public ScavTrap {
private:
	std::string	_name;

public:
	DiamondTrap(std::string _clap_name);
	virtual ~DiamondTrap(void);

	void	attack(const std::string &target);
};