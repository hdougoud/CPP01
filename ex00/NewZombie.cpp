/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:44:00 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/19 11:04:33 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	newZombie(std::string name)
{
	Zombie	*zombie;
	
	zombie = new (std::nothrow) Zombie();
	if (!zombie)
		return (NULL);
	zombie->setName(name);
	return (zombie);
}