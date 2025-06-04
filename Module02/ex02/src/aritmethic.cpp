/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aritmethic.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:19:32 by volmer            #+#    #+#             */
/*   Updated: 2025/06/03 11:44:50 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fixed.hpp"


Fixed Fixed::operator*(const Fixed& other) const {
	Fixed out;
	out.setRawBits((this->_FixedPointValue * other._FixedPointValue) >> this->_NbFractionalBits);
	return (out);
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed out;
	out.setRawBits((this->_FixedPointValue << this->_NbFractionalBits) / other._FixedPointValue) ;
	return (out);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed out;
	out.setRawBits(this->_FixedPointValue + other._FixedPointValue);
	return (out);
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed out;
	out.setRawBits(this->_FixedPointValue - other._FixedPointValue);
	return (out);
}
