/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:48:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 16:52:25 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string humanName)
{
	_name = humanName;
}

HumanB::~HumanB()
{
	return ;
}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

void	HumanB::attack(void)
{
	std::cout << this->getName() << std::endl;
}