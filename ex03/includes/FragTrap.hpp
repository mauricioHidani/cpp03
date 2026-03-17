/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:02:43 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 18:16:17 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: virtual public ClapTrap {
public:
	FragTrap(std::string name);
	virtual ~FragTrap(void);

	void	attack(const std::string &target);
	void	highFivesGuys(void);
};
