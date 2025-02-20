/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieclass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:22:01 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/17 21:22:48 by volmer           ###   ########.fr       */
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
ZombieClass(void);
void	setter(std::string name);
};

ZombieClass*	zombieHorde(int N, std::string name);
void			randomChump(std::string name);
ZombieClass* 	newZombie(std::string name);


#endif