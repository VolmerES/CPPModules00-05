/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:46:54 by volmer            #+#    #+#             */
/*   Updated: 2024/11/28 22:11:41 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// ! CONSTRUCTOR Y DESTRUCTOR POR DEFECTO

Harl::Harl(void){
	std::cout << "Harl has come" << std::endl;
}

Harl::~Harl(void){
	std::cout << "Harl has gone" << std::endl;
}

// ! Funciones privadas de la clase Harl

void	Harl::debug(void){
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
	
void	Harl::info(void){
	std::cout << "INFO: I cannot belive adding extra bacon costs more money. Your didn't put enought bacon in my bruger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;	
}

void	Harl::error(void){
	std::cout << "ERROR: This is unacceptable! I want to speal to the manager now."	
}