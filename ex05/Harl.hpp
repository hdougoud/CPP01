/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:15:44 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/19 17:16:58 by hdougoud         ###   ########.fr       */
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

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void	*_ptrArray[4];
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif