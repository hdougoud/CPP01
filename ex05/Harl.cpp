/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:15:42 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/19 18:05:55 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	void (Harl::*debug)(void) = &Harl::_debug;
	void (Harl::*info)(void) = &Harl::_info;
	void (Harl::*warning)(void) = &Harl::_warning;
	void (Harl::*error)(void) = &Harl::_error;

	_ptrArray[0] = &debug;
	_ptrArray[1] = &info;
	_ptrArray[2] = &warning;
	_ptrArray[3] = &error;
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::complain(std::string level)
{
	(void) level;
}

void	Harl::_debug(void)
{
	std::cout \
	<< COLOR_BLUE \
	<< "Debug message" \
	<< COLOR_RESET \
	<< std::endl;
}

void	Harl::_info(void)
{
	std::cout \
	<< COLOR_WHITE \
	<< "Info message" \
	<< COLOR_RESET \
	<< std::endl;
}

void	Harl::_warning(void)
{
	std::cout \
	<< COLOR_YELLOW \
	<< "Warning message" \
	<< COLOR_RESET \
	<< std::endl;
}

void	Harl::_error(void)
{
	std::cout \
	<< COLOR_RED \
	<< "Red message" \
	<< COLOR_RESET << std::endl;
}