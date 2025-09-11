/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:44:12 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 16:54:13 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string humanName)
{
	_name = humanName;
}

HumanA::~HumanA()
{
	return ;
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << std::endl;
}