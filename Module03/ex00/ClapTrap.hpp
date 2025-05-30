/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:41:32 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 18:34:43 by volmer           ###   ########.fr       */
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

		void setName(const std::string& name);
		void setHitPoints(int amount);
		void setEnergyPoints(int amount);
		void setAttackDamage(int amount);

		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
		
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif