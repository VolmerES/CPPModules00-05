/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:32:11 by volmer            #+#    #+#             */
/*   Updated: 2025/02/18 12:52:08 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

/*			HUMAN B CLASS			*/

class	HumanB{
	private:
		std::string _nameB;
		Weapon* _weaponB;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon& weapon);
		void	attack(void) const;
};

#endif