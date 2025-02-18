/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:31:24 by volmer            #+#    #+#             */
/*   Updated: 2025/02/18 12:52:20 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

/*			HUMAN A CLASS			*/

class	HumanA //: public Weapon
{
	private:
		std::string	_nameA;
		Weapon&	_weaponA;
		
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	setWeapon(Weapon& Weapon);
		void	attack(void) const;
	
};

#endif