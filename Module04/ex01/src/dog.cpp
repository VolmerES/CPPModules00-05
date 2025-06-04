/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:35:26 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 21:34:24 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(const Dog& other) {
	
	this->_brain = new Brain(*other._brain);
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const {
	std::cout << "WOOOOOOOOFF WOOOF" << std::endl;
}
