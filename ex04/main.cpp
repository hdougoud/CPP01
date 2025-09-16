/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:08:36 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/16 17:54:33 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static void	check_args(int argc);

int	main(int argc, const char **argv)
{
	std::ifstream	oldFile;
	std::ifstream	newFile;

	check_args(argc);
	open_file(&argv[1], oldFile);
	create_newFile(argv[1]);
}


static void	check_args(int argc)
{
	if (argc != 4)
	{
		if (argc > 4)
			std::cout << "Too many arguments : ";
		else
			std::cout << "Not enough argument : ";
		std::cout << "Use \"./sed filename s1 s2\"" << std::endl;
		exit(EXIT_FAILURE);
	}
}