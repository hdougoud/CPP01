/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:04:17 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/16 15:39:52 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int		hordeSize;
	Zombie	*zombie;
	
	hordeSize = 5;
	zombie = zombieHorde(hordeSize, "Fred");
	if (!zombie)
		return(1);
	for (int i = 0; i < hordeSize; i++)
	{
		zombie->announce();
		zombie++;
	}
	delete [] (zombie - hordeSize);
	return (0);
};