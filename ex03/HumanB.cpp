/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:48:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/16 10:30:26 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : _name(humanName)
{
	this->_weapon = NULL;
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
	if (this->_weapon == NULL)
		std::cout << this->getName() << " cannot attack without a weapon " << std::endl;
	else
		std::cout << this->getName() << " attacks with their " << _weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weaponType)
{
	this->_weapon = &weaponType;
}