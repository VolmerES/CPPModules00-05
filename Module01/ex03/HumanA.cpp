/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:29:03 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:29:20 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*			HUMAN A CLASS			*/

void	HumanA::setWeapon(Weapon& Weapon){
	_weaponA = Weapon;
}

void	HumanA::attack(void) const{
	std::cout << this->_nameA << ": attacks with their " << _weaponA.getType() << std::endl;
	
}