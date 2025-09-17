/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:56:46 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/17 21:59:26 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	search_and_replace(std::string &s1, std::string &s2, std::string &buffer);

void	replace(char **argv, std::ifstream &oldFile, std::ofstream &newFile)
{
	std::string	s1;
	std::string	s2;
	std::string	buffer;

	s1 = argv[2];
	s2 = argv[3];
	for (int i = 0; getline(oldFile, buffer); i++)
	{
		std::cout << "before : " << buffer << std::endl;
		search_and_replace(s1, s2, buffer);
		std::cout << "after  : " <<buffer << std::endl;
		newFile << buffer << std::endl;
	}
}

void	search_and_replace(std::string &s1, std::string &s2, std::string &buffer)
{
	size_t	idx;

	(void) s2;
	idx = 0;
	while (idx = buffer.find(s1, idx) != std::string::npos)
	{
		buffer.erase(idx, s1.length());
		idx += s1.length(); //add_lenght_2_later
	}
}