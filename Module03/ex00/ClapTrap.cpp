/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:02:13 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 17:34:44 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constructor defecto
ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints= other._hitPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints= other._hitPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {}

void	ClapTrap::attack(const std::string& target) {
	if ((this->_energyPoints && this->_hitPoints) > 0) {
		this->_energyPoints--;
		std::cout <<  "ClapTrap" << this->_name << "attacks" 
		<< target << ", causing" << this->_attackDamage 
		<< "points of damage!" << std::endl;
	}
	return;
}

void	takeDamage(unsigned int amount);