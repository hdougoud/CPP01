/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:43:51 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 13:35:27 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "\x1b[31;1m" << this->_name << " Destructor called" << "\x1b[0m" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->getZombieName() << " BraiiiiiiinnnzzzZ.." << std::endl;
}

void	Zombie::setZombieName(std::string zombieName)
{
	this->_name = zombieName;
}

std::string Zombie::getZombieName(void)
{
	return (this->_name);
}