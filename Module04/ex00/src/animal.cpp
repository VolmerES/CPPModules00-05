/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:54:21 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 19:22:58 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(void) {
	std::cout << "Def constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_type = other._type;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Destructor called" << std::endl;
}
void Animal::makeSound() const {
	std::cout << "What does de fox say" << std::endl;
}

std::string	const& Animal::getType() const {
 	return (this->_type);
}