/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:03:08 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 17:04:21 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanB
{
	public:
		HumanB(std::string humanName);
		~HumanB();
		std::string	getName(void) const;
		void		 attack(void);
	private:
		const std::string _name;
};