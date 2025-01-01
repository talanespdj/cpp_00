/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:15:47 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/18 20:00:37 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>

int	main(void)
{
	Phonebook 	all;
	// std::string	line;

	// std::getline(std::cin, line);
	while (true)
	{
		all.increment();
		std::cout << all.get_index() << std::endl;
		usleep(450000);
		if (all.get_index() % 10 == 0)
			std::cout << "prout prout je suis pair hihi" << std::endl;

	}
	return (0);
}

/*
	std::string 	line;

	std::getline(std::cin, line);
	while (true)
	{
		if (line.find("ADD"))
			std::cout << "on rentre dans la fonction add" << std:: endl;
		else if (line.find("SEARCH"))
			std::cout << "on rentre dans la fonction search" << std:: endl;
		else if  (line.find("EXIT"))
			break;
		else
			std::cout << "ADD // SEARCH // EXIT" << std:: endl;
		std::getline(std::cin, line);
	}*/
