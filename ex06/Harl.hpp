/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:52:29 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/23 10:10:30 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define COLOR_RED		"\x1b[31;1m"
#define COLOR_YELLOW	"\x1b[33;1m"
#define COLOR_BLUE		"\x1b[34;1m"
#define COLOR_WHITE		"\x1b[97;1m"
#define COLOR_RESET		"\x1b[0m"

#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level) const;
	private:
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
		void	(Harl::*_arrayPtr[4])(void);
};

#endif