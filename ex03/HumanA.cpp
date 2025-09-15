/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:44:12 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 17:01:53 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon &weaponType) : _name(humanName), _weapon(weaponType)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

std::string	HumanA::getName(void) const
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << _weapon.getType() << std::endl;
}