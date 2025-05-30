/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:41:32 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 18:30:00 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
	private:

		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
	
		ClapTrap(void); //constructor por defecto
		ClapTrap(std::string name); //Constructor variable
		ClapTrap(const ClapTrap& other); //Constructor de copia
		ClapTrap& operator=(const ClapTrap& other); //Operador de asignación
		~ClapTrap(void); //destructor por defecto

		void setAttackDamage(int amount);
		void getAttackDamage(int amount);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif