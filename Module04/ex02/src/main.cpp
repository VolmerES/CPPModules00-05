/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:33:57 by volmer            #+#    #+#             */
/*   Updated: 2025/06/05 12:15:08 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/animal.hpp"
#include "../inc/cat.hpp"
#include "../inc/dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main() {
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();

	delete i;
	delete j;
	
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

	//Test abstract class
	//Animal* Error = new Animal(); 
	Animal* Correct = new Dog();
	Correct->makeSound();
	delete Correct;
	
	return 0;
}