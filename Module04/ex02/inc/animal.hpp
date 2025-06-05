/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:32:04 by volmer            #+#    #+#             */
/*   Updated: 2025/06/05 12:03:54 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal(void);

		virtual void makeSound() const = 0;
		std::string	const& getType() const;
};

#endif
