/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:36:19 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/28 16:25:41 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ft_replace(size_t pos, size_t len, const std::string s2, const std::string &new_line){
	std::string		result = new_line.substr(0, pos) + s2 +  new_line.substr(pos + len);
	return (result);
}

void	ft_manager(std::string s1, std::string s2, std::ifstream* infile, std::string infilename){
	std::string		line;
	std::string		new_line;
	std::string		file_name = infilename + ".replace.txt";
	std::ofstream	outfile(file_name);

	if (outfile.is_open()){

		while (std::getline(*infile, line)){
			new_line = line;
			size_t pos = 0;
			while ((pos = new_line.find(s1, pos)) != std::string::npos){
				new_line = ft_replace(pos, s1.length(), s2, new_line);
				pos += s2.length();
			}
			outfile << new_line << std::endl;
		}
		outfile.close();
	}
	else
		std::cout << "Error: Unable to open file" << std::endl;
	
}
int	main(int argc, char **argv){

	if (argc == 4){
		
		std::string		s1 = argv[1];
		std::string		s2 = argv[2];
		std::ifstream	infile(argv[3]);

		if  (s1.empty() || s2.empty()){
			std::cerr << "Error: One of the string to replace is empty" << std::endl;
		}
		if (!infile.is_open()){
			std::cerr << "Error: Unable to open file" << std::endl;
			return (1);
		}
		
		std::string infile_name = argv[3];
		ft_manager(s1, s2, &infile, infile_name);
		infile.close();
	}
	else{
		std::cerr << "Error: Invalid arguments" << std::endl;
		std::cout << "Usage:" << argv[0] << " <string1>" << " <string2" << " <filename>" << std::endl;
	}
	return (0);
}