/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:04:17 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 13:58:32 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int		hordeZise;
	Zombie *zombie;
	
	hordeZise = 5;
	zombie = zombieHorde(hordeZise, "Fred");
	if (!zombie)
		return(1);
	for (int i = 0; i < hordeZise; i++)
	{
		zombie->announce();
		zombie++;
	}
	delete [] (zombie - 5);
	return (0);
};