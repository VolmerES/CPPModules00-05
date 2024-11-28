/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:34:11 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/13 17:48:53 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>


int	main(int argc, char **argv)
{
	int	i {0
	};
	int j {-1};
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char)toupper(argv[i][j] + 0);
	}
	std::cout << std::endl;
}