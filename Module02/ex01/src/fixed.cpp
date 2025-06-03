/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:42:38 by volmer            #+#    #+#             */
/*   Updated: 2025/06/03 11:46:00 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->_FixedPointValue = 0;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointValue = other.getRawBits();
}

Fixed::Fixed(const int fixedint){
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointValue = fixedint << _NbFractionalBits;
}

Fixed::Fixed(const float fixedfloat){
	std::cout << "Float constructor called"	<< std::endl;
	this->_FixedPointValue = roundf(fixedfloat * (1 << this->_NbFractionalBits));
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_FixedPointValue = other.getRawBits();
	}
	return(*this);
}
int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" <<std::endl;
	return (this->_FixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_FixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->_FixedPointValue) / (1 << _NbFractionalBits));
}

int		Fixed::toInt(void) const {
	return (this->_FixedPointValue >> _NbFractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}