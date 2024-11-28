/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:28:19 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/25 14:44:57 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){

/*	THE PROGRAM VARIABLES	*/
	std::string brain ("HI THIS IS BRAIN");
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

/*	PRINT THE ADDRESS PROGRAM	*/
	std::cout << &brain << ": address of brain string..."  << std::endl;
	std::cout << stringPTR << ": address of stringPTR..." << std::endl;
	std::cout << &stringREF << ": address of stringREF..." << std::endl;

/*	PRINT THE VALUE OF EACH ADDRESS	*/
	std::cout << brain << ": value of brain string..." << std::endl;
	std::cout << *stringPTR << ": value of stringPTR..." << std::endl;
	std::cout << stringREF << ": value of stringREF..." << std::endl;
}