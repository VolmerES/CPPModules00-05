/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 19:19:41 by volmer            #+#    #+#             */
/*   Updated: 2025/05/31 19:41:25 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor name called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		std::cout << "FragTrap operator asignement called" << std::endl;
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " is requesting high fives from everyone!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if ((this->_energyPoints > 0) && (this->_hitPoints > 0)) {
		this->_energyPoints--;
		std::cout <<  "FragTrap " << this->_name << " attacks " 
		<< target << ", causing " << this->_attackDamage 
		<< " points of damage!" << std::endl;
	}
	return;
}