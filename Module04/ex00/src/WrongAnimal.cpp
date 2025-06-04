/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 20:01:54 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 20:05:05 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal def constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "Wrong animal copy constructor called" << std::endl;
	this->_type = other._type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "Wrong animal copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Wrong animal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "What does de wrong animal say?" << std::endl;
}

std::string	const& WrongAnimal::getType() const {
 	return (this->_type);
}