/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:45:25 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 16:52:17 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	Weapon	club = Weapon(" crude spiked club");
	HumanA	bob("bob", club);
	bob.attack();
	club.setType(" some other type of club");
	bob.attack();

	return (0);
}