/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:03:08 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 16:50:36 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanB
{
	public:
		HumanB(std::string humanName);
		~HumanB();
		std::string	getName(void);
		void HumanB::attack(void);
	private:
		std::string _name;
};