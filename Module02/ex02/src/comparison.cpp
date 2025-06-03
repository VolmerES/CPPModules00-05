/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparison.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:17:41 by volmer            #+#    #+#             */
/*   Updated: 2025/06/03 11:44:56 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fixed.hpp"

bool Fixed::operator>(const Fixed& other) const {
	if (this->getRawBits()> other.getRawBits()){
		return(1);
	}
	else
		return(0);
}

bool Fixed::operator<(const Fixed& other) const {
	if (this->getRawBits() < other.getRawBits()){
		return(1);
	}
	else
		return(0);
}

bool Fixed::operator>=(const Fixed& other) const {
	if (this->getRawBits() >= other.getRawBits()){
		return(1);
	}
	else
		return(0);
}

bool Fixed::operator<=(const Fixed& other) const {
	if (this->getRawBits() <= other.getRawBits()){
		return(1);
	}
	else
		return(0);
}

bool Fixed::operator==(const Fixed& other) const {
	if (this->getRawBits() == other.getRawBits()){
		return(1);
	}
	else
		return(0);
}

bool Fixed::operator!=(const Fixed& other) const {
	if (this->getRawBits() != other.getRawBits()){
		return(1);
	}
	else
		return(0);
}

