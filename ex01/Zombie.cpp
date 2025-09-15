/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:05:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 17:24:06 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "\x1b[31;1m" << this->_name << " Destructor called" << "\x1b[0m" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->getName() << " BraiiiiiiinnnzzzZ.." << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (this->_name);
}

void	Zombie::setName(std::string zombieName)
{
	this->_name = zombieName;
}