/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:28:07 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:28:51 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*			WEAPON CLASS			*/
std::string&	Weapon::getType(){
	std::string& typeREF = this->_type;
	return typeREF;
}

void	Weapon::setType(std::string param){
	this->_type = param;
}