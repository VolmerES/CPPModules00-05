/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:17 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/27 14:56:25 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*			CONSTRUCTORES DEFS*/

Weapon::Weapon(std::string type) : _type(type) {}
HumanA::HumanA(std::string name, Weapon& weapon) : _nameA(name), _weaponA(weapon) {}
HumanB::HumanB(std::string name) : _nameB(name), _weaponB(NULL) {}

/*			DESTRUCTRES DEFS	*/
Weapon::~Weapon(void){}
HumanA::~HumanA(void){}
HumanB::~HumanB(void){}

// ! -------------------------------------------------------------------------

/*			WEAPON CLASS			*/
std::string&	Weapon::getType(){
	std::string& typeREF = this->_type;
	return typeREF;
}

void	Weapon::setType(std::string param){
	this->_type = param;
}

// ! -------------------------------------------------------------------------

/*			HUMAN A CLASS			*/

void	HumanA::setWeapon(Weapon& Weapon){
		_weaponA = Weapon;
}

void	HumanA::attack(void) const{
		std::cout << this->_nameA << ": attacks with their " << _weaponA.getType() << std::endl;
		
}

// ! -------------------------------------------------------------------------

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

// ! -------------------------------------------------------------------------

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