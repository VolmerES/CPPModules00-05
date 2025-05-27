/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:11:04 by volmer            #+#    #+#             */
/*   Updated: 2025/05/27 13:34:57 by volmer           ###   ########.fr       */
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
		Fixed	operator*(const Fixed& other) const; //*
		Fixed	operator+(const Fixed& other) const; //+
		Fixed	operator-(const Fixed& other) const; //-
		Fixed	operator/(const Fixed& other) const; // /
		
		
		
		bool	operator>(const Fixed& other) const; //>
		bool	operator<(const Fixed& other) const; //<
		bool	operator>=(const Fixed& other) const; //>=
		bool	operator<=(const Fixed& other) const; //<=
		bool	operator==(const Fixed& other) const; //==
		bool	operator!=(const Fixed& other) const; //!=

		Fixed	operator++(); //a++
		Fixed	operator--(); //a--
		Fixed	operator++(int); //++a
		Fixed	operator--(int); //--a

		static Fixed&			min(Fixed& a, Fixed& b);
		static Fixed&			max(Fixed& a, Fixed& b);
		static const Fixed&		min(const Fixed& a, const Fixed& b);
		static const Fixed&		max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif

