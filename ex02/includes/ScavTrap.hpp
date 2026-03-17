/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:17:05 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 15:24:56 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap {
public:
	ScavTrap(std::string name);
	virtual ~ScavTrap(void);

	void	attack(const std::string &target);
	void	guardGate(void);
};
