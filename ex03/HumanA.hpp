/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:03:26 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 18:16:21 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
	public:
		HumanA(std::string humanName, Weapon &weaponType);
		~HumanA();
		std::string	getName(void) const;
		void		attack(void) const;
	private:
		const std::string	_name;
		Weapon				&_weapon;
};