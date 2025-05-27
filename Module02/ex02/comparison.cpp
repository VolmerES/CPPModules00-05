/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparison.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:17:41 by volmer            #+#    #+#             */
/*   Updated: 2025/05/27 11:18:27 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

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

