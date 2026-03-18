/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:01:38 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 10:56:04 by mhidani          ###   ########.fr       */
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
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	virtual ~DiamondTrap(void);

	void		attack(const std::string &target);
	void		whoAmI(void);

	DiamondTrap	&operator=(const DiamondTrap &other);
};
