/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:25:58 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 19:38:56 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& other) {
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "MIIIIIIIAAAAAAUUUUUUUUU" << std::endl;
}
