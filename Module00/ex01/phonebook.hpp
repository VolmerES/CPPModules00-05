/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:53 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/10 17:15:50 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

#define MAX_CONTACTS 8


class	Contact{
private:
	std::string _fullname;
	std::string _scndname;
	std::string _nickname;
	std::string _phnumber;
	std::string _dsecret;
public:
	Contact(void) {};
	~Contact(void) {};
	/*Función setter atributos privados del contacto*/
	void	setValue(std::string full_name, std::string scnd_name, std::string nickname
		, std::string ph_number, std::string dark_secret);
	/*Funciones getter atributos para el setter sobre el contacto*/
	std::string getFullname(size_t size) const; //		D
	std::string getScndname(size_t size) const; //		D
	std::string getNickname(size_t size) const; //		D
	std::string getPhoneNumber(size_t size) const;//	D
	std::string getDarkestSecret(size_t size) const;//	D
	/*	Funcion para mostrar la infromación del contacto	*/
	void	ft_showInfo(void) const;
};

class	PhoneBook{
private:
	size_t	_size;
	Contact  _contact[8];
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	ft_add_contact(void);
	size_t	ft_get_size(void) const;
	void	ft_list_contacts(void) const;
	void	ft_display_contact(size_t index) const;
};

bool	ft_isnum(std::string str);
#endif