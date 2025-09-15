/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:48:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 17:06:02 by hdougoud         ###   ########.fr       */
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

void	HumanB::attack(void)
{
	std::cout << this->getName() << std::endl;
}