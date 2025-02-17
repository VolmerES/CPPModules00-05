/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:20:22 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:20:28 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieclass.hpp"

ZombieClass* newZombie(std::string name){
	return new ZombieClass(name);
}