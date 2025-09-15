/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:52:52 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/15 15:56:19 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str;
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";

	std::cout << &str << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';

	std::cout << str << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << std::endl;

	return (0);
}