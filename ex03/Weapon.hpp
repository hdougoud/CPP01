/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:47:16 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/12 14:32:32 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
	public :
		Weapon();
		~Weapon();
		std::string	getType(void);
		void setType(std::string weaponType);
	private:
		std::string _type;
};