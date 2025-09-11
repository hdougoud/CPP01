/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:05:10 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 13:36:30 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde;
	Zombie *firstZombie;
	std::stringstream zombieName;

	horde = new (std::nothrow) Zombie[N];
	if (!horde)
		return (NULL);
	firstZombie = horde;
	for (int i = 0; i < N; i++)
	{
		zombieName << name << ' ' << i + 1;
		horde++->setZombieName(zombieName.str());
		zombieName.str("");
	}
	return (firstZombie);
}