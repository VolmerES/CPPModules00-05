/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:33:57 by volmer            #+#    #+#             */
/*   Updated: 2025/06/05 16:09:34 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/dog.hpp"
#include "../inc/cat.hpp"

int main() {
	std::cout << "\n==== DEEP COPY TEST: COPY CONSTRUCTOR ====\n" << std::endl;

	Dog basic;
	basic.setBrain(0, "I want a bone");
	std::cout << "basic brain idea[0]: " << basic.getBrain().getIdeas(0) << std::endl;

	{
		Dog tmp = basic;
		std::cout << "tmp brain idea[0]: " << tmp.getBrain().getIdeas(0) << std::endl;

		tmp.setBrain(0, "Changed idea");
		std::cout << "tmp brain idea[0] after change: " << tmp.getBrain().getIdeas(0) << std::endl;
		std::cout << "basic brain idea[0] should be unchanged: " << basic.getBrain().getIdeas(0) << std::endl;
	}

	std::cout << "\n==== DEEP COPY TEST: COPY ASSIGNMENT ====\n" << std::endl;

	Dog dog1;
	dog1.setBrain(0, "Original idea");
	Dog dog2;
	dog2 = dog1;

	dog2.setBrain(0, "New idea");
	std::cout << "dog1 brain idea[0]: " << dog1.getBrain().getIdeas(0) << std::endl;
	std::cout << "dog2 brain idea[0]: " << dog2.getBrain().getIdeas(0) << std::endl;

	std::cout << "\n==== DEEP COPY TEST: CAT ====\n" << std::endl;

	Cat cat1;
	cat1.setBrain(0, "Catch the mouse");
	Cat cat2(cat1);

	cat2.setBrain(0, "Sleep on the couch");
	std::cout << "cat1 brain idea[0]: " << cat1.getBrain().getIdeas(0) << std::endl;
	std::cout << "cat2 brain idea[0]: " << cat2.getBrain().getIdeas(0) << std::endl;

	std::cout << "\n==== DESTRUCTION TEST ====\n" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;


	//* ABSTRACT */
	std::cout << "\n==== ABSTRACT CLASS TEST ====\n" << std::endl;

	// Animal a; // Esto no compila si Animal es abstracta
	std::cout << "Animal* ptr = new Dog(); // Esto sí es válido\n";
	Animal* ptr = new Dog();
	ptr->makeSound();
	delete ptr;


	return 0;
}
