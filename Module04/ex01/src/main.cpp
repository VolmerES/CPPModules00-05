/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:33:57 by volmer            #+#    #+#             */
/*   Updated: 2025/06/04 23:07:32 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/animal.hpp"
#include "../inc/cat.hpp"
#include "../inc/dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main() {
	
const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	
	// Test with WrongAnimal
	const WrongAnimal* metawrong = new WrongAnimal();
	const WrongAnimal* Gamusino = new WrongCat();

	metawrong->makeSound();
	Gamusino->makeSound();

	delete Gamusino;
	delete metawrong;


	//Testing Brain
	
	Animal* Frankenstein[100];
	for (int i = 0; i < 100; i++) {
		if (i < 50)
			Frankenstein[i] = new Dog();
		else
			Frankenstein[i] = new Cat();
	}

	for (int j = 0; j < 100; j++)
		std::cout << j << "----->  is a " << Frankenstein[j]->getType() << std::endl;
	for (int i = 0; i < 100; i++) {
	delete Frankenstein[i];
	}

	
	return 0;
}