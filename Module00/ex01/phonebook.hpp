/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:53 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/11 12:25:45 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <stdlib.h>
# include "contact.hpp"

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