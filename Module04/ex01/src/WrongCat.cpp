/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 20:05:21 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 20:06:35 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "Wrong cat constructor called" << std::endl;
	this->_type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat& other) {
	this->_type = other._type;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "MIIIIIIIAAAAAAUUUUUUUUU" << std::endl;
}
