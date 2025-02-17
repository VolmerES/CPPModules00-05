/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:17:49 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:18:12 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieclass.hpp"

ZombieClass*	zombieHorde(int N, std::string name){
	ZombieClass* horde = new ZombieClass[N];
	for (int i = 0; i < N; i++){
		horde[i].setter(name);
	}
	return horde;
}