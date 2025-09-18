/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:19:32 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/18 11:24:54 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

bool	open_file(const char *filename, std::ifstream &file);
bool	create_newFile(std::string, std::ifstream &oldFile, std::ofstream &newFile);
void	replace(char **argv, std::ifstream &oldFile, std::ofstream &newFile);
void	close_all_files(std::ifstream &oldFile, std::ofstream &newFile);

#endif