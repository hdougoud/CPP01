/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_files.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:21:18 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/17 21:29:22 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "sed.hpp"

void	open_file(const char *filename, std::ifstream &oldFile)
{
	oldFile.open(filename);
	if (oldFile.fail())
	{
		std::cout << "failed to open oldFile " << std::endl;
		std::_Exit(EXIT_FAILURE);
	}
}

void	create_newFile(std::string filename, std::ofstream &newFile)
{
	filename += ".replace";
	newFile.open(filename.c_str());
	if (newFile.fail())
	{
		std::cout << "failed to open newFile" << std::endl;
		std::_Exit(EXIT_FAILURE);
	}
}