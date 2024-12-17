/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 01:15:47 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/13 01:38:13 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "contact.hpp"
#include "phonebook.hpp"
#include <stdio.h>

int	main(void)
{
	Phonebook 	all;
	std::string	line;

	// std::getline(std::cin, line);
	while (line.compare("EXIT"))
	{
		all.input_line();
		if (!all.retrieve_line().find("ADD"))
			std::cout << "on rentre dans la fonction add" << std:: endl;
		else if (!all.retrieve_line().find("SEARCH"))
			std::cout << "on rentre dans la fonction search" << std:: endl;
		else
			std::cout << "ADD // SEARCH // EXIT" << std:: endl;
		// std::getline(std::cin, line);
	}
	return (0);
}
