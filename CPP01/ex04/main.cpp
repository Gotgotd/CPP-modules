/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:53:09 by gdaignea          #+#    #+#             */
/*   Updated: 2024/08/21 11:06:29 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	is_empty(std::ifstream& file) {

	file.seekg(0, std::ios::end);
	if (file.tellg() == 0) 
		return true;
	else {
		file.seekg(std::ios::beg);
		return false;
	}
}


void	replace_line(std::string& oldStr, std::string& newStr, std::string& line, int& count) {

	size_t	pos = 0;

	pos = line.find(oldStr);
	while (pos != std::string::npos) {
		line.erase(pos, oldStr.length());
		line.insert(pos, newStr);
		count++;
		pos = line.find(oldStr);
	}
	return ;
}

int	main(int ac, const char **av) {

	if (ac != 4) {
		std::cerr << "program must be runned with 3 arguments (in that order) :\n"
			<< "- a file\n"
			<< "- a sentence to be replaced\n"
			<< "- a sentance to replace the 1st one" << std::endl;
		return 1;
	}
	
	std::string		line;
	std::string		file = av[1];
	std::string		newFile = file + ".replace";
	std::string		oldStr = av[2];
	std::string		newStr = av[3];
	int				count = 0;


	std::ifstream	test(av[1]);

	if (!test.is_open()) {
		std::cerr << "Error. File " << av[1] << " could not be open" << std::endl;
		return 1;
	}
	if (is_empty(test)) {
		std::cout << "Error. File is empty" << std::endl;
		return 1;
	}

	std::ofstream	testCpy(newFile.c_str());

	while (std::getline(test, line)) {
		replace_line(oldStr, newStr, line, count);
		testCpy << line << std::endl;
	}
	if (count == 0)
		std::cout << "string '" << oldStr << "' couldn't be found in the file" << std::endl;
	test.close();
	testCpy.close();
	return 0;
}