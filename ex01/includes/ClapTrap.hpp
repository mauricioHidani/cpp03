/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 19:48:39 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/17 10:06:06 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap(void);

	std::string		getName(void) const;
	int				getHitPoints(void) const;
	int				getEnergyPoints(void) const;
	int				getAttackDamage(void) const;

	void			setAttackDamage(const int amount);

	virtual void	attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	ClapTrap		&operator=(const ClapTrap &other);
};

std::ostream		&operator<<(std::ostream &out, const ClapTrap &obj);
