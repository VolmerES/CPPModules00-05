/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:34:11 by jdelorme          #+#    #+#             */
/*   Updated: 2025/02/10 16:03:47 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>


int	main(int argc, char **argv)
{
	int	i (0);
	int j (0);
	int flag;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			flag = 0;
			if (argv[i][j] == ' ' && flag == 0)
			{
				std::cout << " ";
				flag = 1;
			}
			if (argv[i][j] != ' ')
			{
				std::cout << (char)toupper(argv[i][j] + 0);
			}
		}
		
	}
	std::cout << std::endl;
}