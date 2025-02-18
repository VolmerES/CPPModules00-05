/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:17 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/17 21:37:59 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*			CONSTRUCTORES DEFS*/

Weapon::Weapon(std::string type) : _type(type) {}
HumanA::HumanA(std::string name, Weapon& weapon) : _nameA(name), _weaponA(weapon) {}
HumanB::HumanB(std::string name) : _nameB(name), _weaponB(NULL) {}

/*			DESTRUCTRES DEFS	*/
Weapon::~Weapon(void){}
HumanA::~HumanA(void){}
HumanB::~HumanB(void){}

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return 0;
}