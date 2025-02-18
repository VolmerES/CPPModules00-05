/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:30:29 by volmer            #+#    #+#             */
/*   Updated: 2025/02/18 12:51:53 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

/*			WEAPON CLASS			*/

class	Weapon{
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string&		getType();
		void				setType(std::string param);
	
};

#endif