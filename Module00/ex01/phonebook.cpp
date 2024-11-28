/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:55 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/20 19:07:37 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	ft_isnum(std::string str) {
	for (size_t cur = 0; cur < str.length(); cur++)
		if ((str[cur] < '0' || str[cur] > '9') && str[cur] != '-')
			return false;
	return true;
}
/*		APARATADO PHONEBOOK		*/

//Constructor
PhoneBook::PhoneBook(void){
	this->_size = 0;
	this->_contact = new Contact[MAX_CONTACTS];
}
//Destructor
PhoneBook::~PhoneBook(void){
	delete[] this->_contact;
}

//geter varable sizze
std::size_t PhoneBook::ft_get_size(void) const{
	return (this->_size);
}

//listar contactos
void	PhoneBook::ft_list_contacts(void) const{
	int	i = 0;
	std::cout << "\tIndex\t First Name\t Second Name\t Nickname\t Phone Number\n";
	while (i < this->_size){
		std::cout << "\t" << i << "\t" << this->_contact[i].getFullname(10) << "\t" << this->_contact[i].getScndname(10)
		<< "\t" << this->_contact[i].getNickname(10) << "\t" << this->_contact[i].getPhoneNumber(10) << std::endl;
		i++;
	}
}

//listar un contacto
void	PhoneBook::ft_display_contact(size_t index) const{
	if (index <= 8 && index >= 0)
		this->_contact[index].ft_showInfo();
	else
		std::cout << "Invalid index" << std::endl;
}

//Añadir contactos
void	PhoneBook::ft_add_contact(void){
	std::string firstname, scndname, nickname, phonenumber, darkestsecret;
	std::cout << "First Name:\t"; getline(std::cin, firstname);
	std::cout << "Second Name:\t"; getline(std::cin, scndname);
	std::cout << "Nickname:\t"; getline(std::cin, nickname);
	std::cout << "Phone Number:\t"; getline(std::cin, phonenumber);
	std::cout << "Darkest Secret:\t"; getline(std::cin, darkestsecret);

	if (this->_size > MAX_CONTACTS){
		for (int i = 0; i <= MAX_CONTACTS, i++;)
			this->_contact[i] = this->_contact[i + 1];
		this->_size--;
	}
	else{
		this->_contact[this->_size].setValue(firstname, scndname, nickname, phonenumber, darkestsecret);
		this->_size++;
	}
}

/*		APARTADO DE CREACIÓN DEL CONTACTO	*/

void	Contact::setValue(std::string full_name, std::string scnd_name, std::string nickname
		, std::string ph_number, std::string dark_secret)
{
	this->_fullname = full_name;
	this->_scndname = scnd_name;
	this->_nickname = nickname;
	this->_phnumber = ph_number;
	this->_dsecret = dark_secret;
}

std::string	Contact::getFullname(size_t size) const{
	if (this->_fullname.length() > size){
		std::string full_name = this->_fullname.substr(0, size - 1);
		full_name.push_back('.');
		return full_name;
	}
	return (this->_fullname);
}

std::string	Contact::getScndname(size_t size) const{
	if (this->_scndname.length() > size){
		std::string scnd_name = this->_scndname.substr(0, size - 1);
		scnd_name.push_back('.');
		return (scnd_name);
	}
	return (this->_scndname);
}

std::string	Contact::getNickname(size_t size) const{
	if (this->_nickname.length() > size){
		std::string nickname = this->_nickname.substr(0, size - 1);
		nickname.push_back('.');
		return (nickname);
	}
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(size_t size) const{
	if (this->_phnumber.length() > size){
		std::string ph_number =  this->_phnumber.substr(0, size - 1);
		ph_number.push_back('.');
		return (ph_number);
	}
	return (this->_phnumber);
}

std::string Contact::getDarkestSecret(size_t size) const{
	if (this->_dsecret.length() > size){
		std::string dark_secret = _dsecret.substr(0, size - 1);
		dark_secret.push_back('.');
		return (dark_secret);
	}
	return (this->_dsecret);
}

void	Contact::ft_showInfo(void){
	std::cout << "\tFirst Name:\t" << this->_fullname << std::endl;
	std::cout << "\tSecond Name:\t" << this->_scndname << std::endl;
	std::cout << "\tNickname:\t" << this->_nickname << std::endl;
	std::cout << "\tPhoneNumber:\t" << this->_phnumber << std::endl;
	std::cout << "\tDarkest Secret\t" << this->_dsecret << std::endl;
}

/*		FUNCION MAIN PROGRAMA E INSTANCIADOR	*/
int	main()
{
	PhoneBook	PhoneInstance;
	Contact		ContactInstance;
	std::string input;

	std::cout << "Bienvenido a tu agenda de contactos. Opciones disponibles ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "Ingrese una opción: ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			PhoneInstance.ft_add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			std::string index;
			PhoneInstance.ft_list_contacts();
    		std::cout << "\tIngreser un índice: ";
			std::getline(std::cin, index);
			if (ft_isnum(index))
				PhoneInstance.ft_display_contact(atoi(input.c_str()));
			else
				std::cout << "\tInvalid index" << std::endl;
			
		}
		else if (input.empty() || input.compare("EXIT") == 0)
			break;
		else
			std::cout << "¡OPCIÓN INVALIDA!" << std::endl;
	}
	std::cout << std::endl;
	return (0);	
}