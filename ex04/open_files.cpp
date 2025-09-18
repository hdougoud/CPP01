/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_files.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:21:18 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/18 11:26:03 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "sed.hpp"

bool	open_file(const char *filename, std::ifstream &oldFile)
{
	oldFile.open(filename);
	if (oldFile.fail())
	{
		std::cout << "failed to open oldFile " << std::endl;
		return (1);
	}
	return (0);
}

bool	create_newFile(std::string filename, std::ifstream &oldFile, std::ofstream &newFile)
{
	filename += ".replace";
	newFile.open(filename.c_str());
	if (newFile.fail())
	{
		std::cout << "failed to open newFile" << std::endl;
		close_all_files(oldFile, newFile);
		return (1);
	}
	return (0);
}

void	close_all_files(std::ifstream &oldFile, std::ofstream &newFile)
{
	if (oldFile.is_open())
		oldFile.close();
	if (newFile.is_open())
		newFile.close();
}