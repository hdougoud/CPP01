/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:19:32 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/16 17:59:06 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <stdlib.h>
#include <iostream>
#include <fstream>

void			open_file(const char **filename, std::ifstream &file);
void			create_newFile(const char *filename);

#endif