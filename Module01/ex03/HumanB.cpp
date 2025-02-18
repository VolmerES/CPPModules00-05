/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:29:29 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:29:47 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*			HUMAN B CLASS			*/

void	HumanB::attack(void) const{
	if (this->_weaponB)
		std::cout << this->_nameB << ": attacks with their " << this->_weaponB->getType() << std::endl;
	else
		std::cout << "There is no weapon to attack" << std::endl;
}

void	HumanB::setWeapon(Weapon& Weapon){
	this->_weaponB = &Weapon;
}