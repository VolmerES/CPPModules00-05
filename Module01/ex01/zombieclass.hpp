/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieclass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:22:01 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/22 15:50:40 by jdelorme         ###   ########.fr       */
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

#endif