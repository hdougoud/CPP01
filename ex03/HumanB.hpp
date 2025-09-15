/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:03:08 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 19:02:28 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string humanName);
		~HumanB();
		std::string	getName(void) const;
		void		attack(void) const;
		void		setWeapon(Weapon &weaponType);
	private:
		const std::string	_name;
		Weapon				*_weapon;
};