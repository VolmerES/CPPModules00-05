/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:44:10 by jdelorme          #+#    #+#             */
/*   Updated: 2024/12/03 16:38:57 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Fixed{
	private:
		int	_fixedp;
		static const int	_fracb = 8;

	public:
		Fixed(void); // construtctor por defecto
		Fixed(const Fixed& other); //constructor de copias
		Fixed&	operator=(const Fixed& other); //operador de asignacion
		~Fixed(void); //destructor por defecto
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif