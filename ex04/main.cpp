/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:08:36 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/18 11:23:40 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static bool	check_args(int argc);

int	main(int argc, char **argv)
{
	std::ifstream	oldFile;
	std::ofstream	newFile;

	if (check_args(argc))
		return (1);
	if (open_file(argv[1], oldFile))
		return (1);
	if (create_newFile(argv[1], oldFile, newFile))
		return (1);
	replace(argv, oldFile, newFile);
	close_all_files(oldFile, newFile);
	return (0);
}


static bool	check_args(int argc)
{
	if (argc != 4)
	{
		if (argc > 4)
			std::cout << "Too many arguments : ";
		else
			std::cout << "Not enough argument : ";
		std::cout << "Use \"./sed filename s1 s2\"" << std::endl;
		return (1);
	}
	return (0);
}