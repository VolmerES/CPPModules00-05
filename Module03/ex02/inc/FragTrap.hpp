/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:56:40 by volmer            #+#    #+#             */
/*   Updated: 2025/05/31 19:12:12 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void); //constructor por defecto
		FragTrap(std::string name); //constructor de nombre
		FragTrap(const FragTrap& other); // constructor de copia
		FragTrap& operator=(const FragTrap& other); //operador de asignacion
		~FragTrap(void); //Destructor

		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif