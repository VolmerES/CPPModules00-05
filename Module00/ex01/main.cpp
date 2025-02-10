/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:02:41 by volmer            #+#    #+#             */
/*   Updated: 2025/02/10 18:03:23 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

bool	ft_isnum(std::string str) {
	for (size_t cur = 0; cur < str.length(); cur++)
		if ((str[cur] < '0' || str[cur] > '9') && str[cur] != '-')
			return false;
	return true;
}

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
				PhoneInstance.ft_display_contact(atoi(index.c_str()));
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