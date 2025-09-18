/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:56:46 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/18 13:22:26 by hdougoud         ###   ########.fr       */
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
	while (getline(oldFile, buffer))
	{
		search_and_replace(s1, s2, buffer);
		newFile << buffer << std::endl;
	}
}

void	search_and_replace(std::string &s1, std::string &s2, std::string &buffer)
{
	size_t	idx;

	idx = 0;
	while ((idx = buffer.find(s1, idx)) != std::string::npos)
	{
		buffer.erase(idx, s1.length());
		buffer.insert(idx, s2);
		idx += s2.length();
	}
}