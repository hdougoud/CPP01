/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:15:36 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/23 11:25:15 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("OTHER");
	return (0);
}