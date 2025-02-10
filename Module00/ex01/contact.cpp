/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:59:52 by volmer            #+#    #+#             */
/*   Updated: 2025/02/10 18:00:33 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

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

void	Contact::ft_showInfo(void) const {
std::cout << "\tFirst Name:\t" << this->_fullname << std::endl;
std::cout << "\tSecond Name:\t" << this->_scndname << std::endl;
std::cout << "\tNickname:\t" << this->_nickname << std::endl;
std::cout << "\tPhoneNumber:\t" << this->_phnumber << std::endl;
std::cout << "\tDarkest Secret\t" << this->_dsecret << std::endl;
}