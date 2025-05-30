/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:02:13 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 18:37:11 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constructor defecto
ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints= other._hitPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Operator asignment called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints= other._hitPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if ((this->_energyPoints > 0) && (this->_hitPoints > 0)) {
		this->_energyPoints--;
		std::cout <<  "ClapTrap " << this->_name << " attacks " 
		<< target << ", causing " << this->_attackDamage 
		<< " points of damage!" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0)
	{
		this->_hitPoints = this->_hitPoints - amount;
		if (this->_hitPoints <= 0) {
			this->_hitPoints = 0;
		}
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!"  << std::endl;
	}
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself, recovering " 
		          << amount << " hit points!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " can't repair: no energy or dead." 
		          << std::endl;
	}
}

std::string ClapTrap::getName() const {
	return this->_name;
}

int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

// Setters
void ClapTrap::setName(const std::string& name) {
	this->_name = name;
}

void ClapTrap::setHitPoints(int amount) {
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount) {
	this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount) {
	this->_attackDamage = amount;
}
