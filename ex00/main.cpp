/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:43:56 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/23 11:08:32 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie	*zombie;
	
	zombie = newZombie("Fred");
	if (!zombie)
		return (1);
	zombie->announce();
	delete zombie;
	randomChump("Albert");
	return (0);
}