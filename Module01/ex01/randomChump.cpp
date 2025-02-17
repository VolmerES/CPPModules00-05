/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:19:52 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:20:05 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieclass.hpp"

void	randomChump(std::string name){
	ZombieClass Zombie = ZombieClass(name);
	Zombie.announce();
}