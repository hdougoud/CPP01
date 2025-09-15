/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:47:16 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 17:12:25 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public :
		Weapon(std::string weaponType);
		~Weapon();
		std::string	getType(void) const;
		void setType(std::string weaponType);
	private:
		std::string _type;
};

#endif