/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:55 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/10 18:03:15 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

//Constructor
PhoneBook::PhoneBook(void){
	this->_size = 0;
}
//Destructor
PhoneBook::~PhoneBook(void){
}

//geter varable sizze
std::size_t PhoneBook::ft_get_size(void) const{
	return (this->_size);
}

//listar contactos
void PhoneBook::ft_list_contacts(void) const{
    size_t i = 0;

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Second Name" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::setw(10) << "Phone Number" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    while (i < this->_size){
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << this->_contact[i].getFullname(10) << "|"
                  << std::setw(10) << this->_contact[i].getScndname(10) << "|"
                  << std::setw(10) << this->_contact[i].getNickname(10) << "|"
                  << std::setw(10) << this->_contact[i].getPhoneNumber(10) << std::endl;
        i++;
    }
}

void	PhoneBook::ft_display_contact(size_t index) const{
	if (index < this->_size)
		this->_contact[index].ft_showInfo();
	else
		std::cout << "Invalid index" << std::endl;
}

void	PhoneBook::ft_add_contact(void){
	std::string firstname, scndname, nickname, phonenumber, darkestsecret;
	do
	{
		std::cout << "First Name:\t"; getline(std::cin, firstname);
		if (firstname.empty())
			std::cout << "First Name is required" << std::endl;
	} while (firstname.empty());
	do {
	std::cout << "Second Name:\t"; getline(std::cin, scndname);
	if (scndname.empty())
		std::cout << "Second Name is required" << std::endl;
	} while (scndname.empty());
	do {
		std::cout << "Nickname:\t"; getline(std::cin, nickname);
	if (nickname.empty())
		std::cout << "Nickname is required" << std::endl;
	} while (nickname.empty());
	do {
		std::cout << "Phone Number:\t"; getline(std::cin, phonenumber);
	if (phonenumber.empty() || !ft_isnum(phonenumber)){
		std::cout << "Phone Number invalid" << std::endl;
		phonenumber.clear();
	}
	} while (phonenumber.empty());
	do {
	std::cout << "Darkest Secret:\t"; getline(std::cin, darkestsecret);
	if (darkestsecret.empty())
		std::cout << "Darkest Secret is required" << std::endl;
	} while (darkestsecret.empty());

	if (this->_size >= MAX_CONTACTS){
		for (int i = 0; i < MAX_CONTACTS - 1; i++)
			this->_contact[i] = this->_contact[i + 1];
		this->_contact[MAX_CONTACTS - 1].setValue(firstname, scndname, nickname, phonenumber, darkestsecret);
	}
	else{
		this->_contact[this->_size].setValue(firstname, scndname, nickname, phonenumber, darkestsecret);
		this->_size++;
	}
}