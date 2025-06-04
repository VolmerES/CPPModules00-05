/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:32:04 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 12:56:28 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	private:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		~Animal(void);

		void makeSound();
		void getType();
};

#endif
