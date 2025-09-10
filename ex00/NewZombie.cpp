/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:44:00 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/10 18:35:46 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	newZombie(std::string name)
{
	Zombie	*zombie;
	
	zombie = new Zombie();
	zombie->setZombieName(name);
	return (zombie);
}