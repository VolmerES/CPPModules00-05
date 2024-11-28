/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:48:36 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/25 14:25:29 by jdelorme         ###   ########.fr       */
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

ZombieClass* newZombie(std::string name){
	return new ZombieClass(name);
}

void	randomChump(std::string name){
	ZombieClass Zombie = ZombieClass(name);
	Zombie.announce();
}
//EX01

ZombieClass::ZombieClass(void){}

void	ZombieClass::setter(std::string name){
	this->_name = name;
}

ZombieClass*	zombieHorde(int N, std::string name){
	ZombieClass* horde = new ZombieClass[N];
	for (int i = 0; i < N; i++){
		horde[i].setter(name);
	}
	return horde;
}

void	logo(){
			std::cout << "\033[32m";

			std::cout << R"(
		⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠖⠊⠉⠉⠉⠉⢉⠝⠉⠓⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⠀⢀⡴⣋⠀⠀⣤⣒⡠⢀⠀⠐⠂⠀⠤⠤⠈⠓⢦⡀⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⣰⢋⢬⠀⡄⣀⠤⠄⠀⠓⢧⠐⠥⢃⣴⠤⣤⠀⢀⡙⣆⠀⠀⠀⠀
		⠀⠀⠀⠀⢠⡣⢨⠁⡘⠉⠀⢀⣤⡀⠀⢸⠀⢀⡏⠑⠢⣈⠦⠃⠦⡘⡆⠀⠀⠀
		⠀⠀⠀⠀⢸⡠⠊⠀⣇⠀⠀⢿⣿⠇⠀⡼⠀⢸⡀⠠⣶⡎⠳⣸⡠⠃⡇⠀⠀⠀
		⢀⠔⠒⠢⢜⡆⡆⠀⢿⢦⣤⠖⠒⢂⣽⢁⢀⠸⣿⣦⡀⢀⡼⠁⠀⠀⡇⠒⠑⡆
		⡇⠀⠐⠰⢦⠱⡤⠀⠈⠑⠪⢭⠩⠕⢁⣾⢸⣧⠙⡯⣿⠏⠠⡌⠁⡼⢣⠁⡜⠁
		⠈⠉⠻⡜⠚⢀⡏⠢⢆⠀⠀⢠⡆⠀⠀⣀⣀⣀⡀⠀⠀⠀⠀⣼⠾⢬⣹⡾⠀⠀
		⠀⠀⠀⠉⠀⠉⠀⠀⠈⣇⠀⠀⠀⣴⡟⢣⣀⡔⡭⣳⡈⠃⣼⠀⠀⠀⣼⣧⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⠀⠀⣸⣿⣿⣿⡿⣷⣿⣿⣷⠀⡇⠀⠀⠀⠙⠊⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣠⠀⢻⠛⠭⢏⣑⣛⣙⣛⠏⠀⡇⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠠⠜⠓⠉⠉⠀⠐⢒⡒⡍⠐⡇⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠒⠢⠤⣀⣀⣀⣀⣘⠧⠤⠞⠁⠀⠀⠀⠀⠀⠀⠀
		)";

			std::cout << "\033[0m";
			std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	logo();
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