/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:03:05 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 21:21:21 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain def constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = other._ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdeas(int index, const std::string& ideas) {
	if (index >= 0 && index <= 100)
		this->_ideas[index] = ideas;
}

std::string	Brain::getIdeas(int index) const {
	if (index >= 0 && index <= 100) {
		return (this->_ideas[index]);
	}
	return "";
}