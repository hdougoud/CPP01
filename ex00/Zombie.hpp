/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:43:53 by hdougoud          #+#    #+#             */
/*   Updated: 2025/09/10 18:31:11 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setZombieName(std::string zombieName);
		std::string getZombieName(void);
	private:
		std::string _name;
};
