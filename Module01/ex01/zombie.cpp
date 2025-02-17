/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:48:36 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/17 21:21:03 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieclass.hpp"

ZombieClass::ZombieClass(std::string name){
	this->_name = name;
}

ZombieClass::~ZombieClass(void){
	std::cout << this->_name << "\033[34m get destroyed by a good programmer...\033[0m" << std::endl;
}

void	ZombieClass::announce(void){
	std::cout << this->_name << "	\033[31m: BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

ZombieClass::ZombieClass(void){}

void	ZombieClass::setter(std::string name){
	this->_name = name;
}