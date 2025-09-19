/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:52:11 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/19 17:07:37 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::complain(std::string level) const
{
	(void) level;

	switch(0)
	{
		case 0:
			this->_debug();
			/*FALLTHROUGH*/
		case 1:
			this->_info();
			/*FALLTHROUGH*/
		case 2:
			this->_warning();
			/*FALLTHROUGH*/
		case 3:
			this->_error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::_debug(void) const
{
	std::cout
	<< COLOR_BLUE
	<< "[ DEBUG ]\n"
	<< "Debug message\n"
	<< COLOR_RESET << std::endl;
}

void	Harl::_info(void) const
{
	std::cout
	<< COLOR_WHITE
	<< "[ INFO ]\n"
	<< "Info message\n"
	<< COLOR_RESET << std::endl;
}

void	Harl::_warning(void) const
{
	std::cout
	<< COLOR_YELLOW
	<< "[ WARNING ]\n"
	<< "Warning message\n"
	<< COLOR_RESET << std::endl;
}

void	Harl::_error(void) const
{
	std::cout
	<< COLOR_RED
	<< "[ ERROR ]\n"
	<< "Red message\n"
	<< COLOR_RESET << std::endl;
}