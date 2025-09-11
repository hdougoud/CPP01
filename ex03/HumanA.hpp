/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:03:26 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/11 16:51:54 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanA
{
	public:
		HumanA(std::string humanName);
		~HumanA();
		std::string	getName(void);
		void	HumanA::attack(void);
	private:
		std::string	_name;
};