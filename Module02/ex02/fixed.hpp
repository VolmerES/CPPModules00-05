/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:11:04 by volmer            #+#    #+#             */
/*   Updated: 2025/05/27 11:28:22 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int	_FixedPointValue;
		static const int _NbFractionalBits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(const int fixedint);
		Fixed(const float fixedfloat);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed Fixed::operator*(const Fixed& other) const; //*
		Fixed Fixed::operator+(const Fixed& other) const; //+
		Fixed Fixed::operator-(const Fixed& other) const; //-
		Fixed Fixed::operator/(const Fixed& other) const; // /
		
		
		
		bool Fixed::operator>(const Fixed& other) const; //>
		bool Fixed::operator<(const Fixed& other) const; //<
		bool Fixed::operator>=(const Fixed& other) const; //>=
		bool Fixed::operator<=(const Fixed& other) const; //<=
		bool Fixed::operator==(const Fixed& other) const; //==
		bool Fixed::operator!=(const Fixed& other) const; //!=

		Fixed Fixed::operator++(); //++
		Fixed Fixed::operator--(); //--
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif

