/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manipulation.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:21:18 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/16 18:01:39 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errno.h"
#include "sed.hpp"

void	open_file(const char **filename, std::ifstream &oldFile)
{
	oldFile.open(*filename);
	if (oldFile.fail())
	{
		std::cout << "failed to open file" << std::endl;
	}
}

void	create_newFile(const char *filename)
{
	std::ifstream	newFile (std::string(filename) + ".replace");	//need a malloc ?
}