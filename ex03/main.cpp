/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:45:25 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/12 14:29:00 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	HumanA	humanA("FredA");
	HumanB	humanB("FredB");

	humanA.attack();
	humanB.attack();
	return (0);
}