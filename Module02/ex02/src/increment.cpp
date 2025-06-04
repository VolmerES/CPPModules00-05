/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   increment.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:28:52 by volmer            #+#    #+#             */
/*   Updated: 2025/06/03 11:44:59 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fixed.hpp"

Fixed Fixed::operator++() {
	this->_FixedPointValue++;
	return (*this);	
}

Fixed Fixed::operator--() {
	this->_FixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp;
	temp = *this;
	this->_FixedPointValue++;
	return (temp);
}

Fixed Fixed::operator--(int) {
	Fixed temp;
	temp = *this;
	this->_FixedPointValue--;
	return (temp);
}