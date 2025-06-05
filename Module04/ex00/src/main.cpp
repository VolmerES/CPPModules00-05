/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:33:57 by volmer            #+#    #+#             */
/*   Updated: 2025/06/05 16:15:07 by jdelorme         ###   ########.fr       */
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
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	
	// Test WrongAnimal
	const WrongAnimal* metawrong = new WrongAnimal();
	const WrongAnimal* Gamusino = new WrongCat();

	metawrong->makeSound();
	Gamusino->makeSound();

	delete Gamusino;
	delete metawrong;
	delete i;
	delete j;
	delete meta;
	
	return 0;
}