/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:56:29 by volmer            #+#    #+#             */
/*   Updated: 2025/02/10 17:59:03 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>


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
#endif