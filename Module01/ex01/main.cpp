/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:16:24 by volmer            #+#    #+#             */
/*   Updated: 2025/02/17 21:24:03 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieclass.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::cout << "	 	\033[33mWelcome to Left 4 Dead horde creator\033[0m" << std::endl;
	std::cout << "\033[32m[1]. Creating Zombie type called Boomer...\033[0m" << std::endl;
	ZombieClass Boomer = ZombieClass("Boomer");
	Boomer.announce();
	
	std::cout << "\033[32m[2]. Creating a Zombie type called Splitter...\033[0m" << std::endl;
	ZombieClass *Splitter = newZombie("Splitter"); 
	Splitter->announce();
	delete (Splitter);

	std::cout << "\033[32m[3]. Creating a Zombie type called Witch...\033[0m" << std::endl;
	randomChump("Witch");
	
	std::cout << "Calling a horde of zombies..." << std::endl;
	ZombieClass* Horde = zombieHorde(8, "HordeZombie");
	delete[] Horde;
	return (0);
}

