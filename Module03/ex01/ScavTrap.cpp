/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:52:16 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 19:30:41 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "Default constructor called" << std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Name constructor called" << std::endl;
	this->setName(name);
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	this->_name = other._name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "Operator asignment called" << std::endl;
	if (this != &other) {
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
		this->_name = other._name;
	}
}

ScavTrap::~ScavTrap(void){
	std::cout << "Destructor called" << std::endl;
}