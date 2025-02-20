/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieclass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:22:01 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/17 20:52:28 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIECLASS_HPP
#define ZOMBIECLASS_HPP

#include <iostream>

class ZombieClass{
private:
std::string		_name;

public:
ZombieClass(std::string name);
~ZombieClass(void);
void	announce(void);
};

void			logo();
ZombieClass*	newZombie(std::string name);
void			randomChump(std::string name);

#endif