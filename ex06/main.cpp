/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:52:04 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/23 11:01:51 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		if (argc > 2)
			std::cout << "Please use only one argument" << std::endl;
		else
			std::cout << "Please provide an argument" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}