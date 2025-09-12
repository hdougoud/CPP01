/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:47:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/12 14:33:03 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string weaponType)
{
	_type = weaponType;
}