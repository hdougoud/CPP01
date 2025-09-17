/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:19:32 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/17 21:28:11 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <cstdlib>
#include <iostream>
#include <fstream>

void	open_file(const char *filename, std::ifstream &file);
void	create_newFile(std::string, std::ofstream &newFile);
void	replace(char **argv, std::ifstream &oldFile, std::ofstream &newFile);

#endif