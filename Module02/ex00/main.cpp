/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:51:16 by jdelorme          #+#    #+#             */
/*   Updated: 2024/12/03 17:19:42 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Fixed::Fixed(void) : _fixedp (0) {
	std::cout << "Constructor por defecto llamado" << std::endl;
}

Fixed::Fixed(const Fixed& other){

	this->_fixedp = other._fixedp; 
	std::cout << "Constructor de copias por defecto llamado" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor por defecto llamado" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
	//verificar que el objeto no es el mismo que el objeto fuente.
	//verificar que no tenga memoria dinamica asignada
	//copiar los recursos del objeto fuente

	if (this != &other){
		this->setRawBits(other.getRawBits());
	}
	std::cout << "Operador llamado" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const{
	std::cout << "getrawbits llamado" << std::endl;
	return (this->_fixedp);
}

void	Fixed::setRawBits(int const raw){
	(this->_fixedp = raw);
	std::cout << "setrawbits llamado" << std::endl;
}

int	main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}