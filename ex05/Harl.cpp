/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:15:42 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/23 11:22:54 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_arrayPtr[0] = &Harl::_debug;
	_arrayPtr[1] = &Harl::_info;
	_arrayPtr[2] = &Harl::_warning;
	_arrayPtr[3] = &Harl::_error;
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::complain(std::string level)
{
	std::string	_arrayStr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(_arrayStr[i]))
		{
			(this->*_arrayPtr[i])();
			break;
		}
	}
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
	<< "Error message" \
	<< COLOR_RESET << std::endl;
}