/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:48:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 19:04:06 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : _name(humanName)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

std::string	HumanB::getName(void) const
{
	return (this->_name);
}

void	HumanB::attack(void) const
{
	std::cout << this->getName() << " attacks with their " << _weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weaponType)
{
	_weapon = &weaponType;
}