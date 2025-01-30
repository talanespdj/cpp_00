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
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>

int	main(void)
{
	Phonebook 	all;
	std::string	line;

	while (true)
	{
		std::cout << ">";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if (line == "EXIT")
			break ;
		else if (line == "ADD")
			all.add();
		else if (line == "SEARCH")
			all.search();
		else if (line != "")
			std::cout << "ADD | SEARCH | EXIT" << std::endl;
	}
	return (0);
}
