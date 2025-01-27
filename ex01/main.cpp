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
	std::string	line;

	while (true)
	{
		std::cout << ">";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		if (line.compare("EXIT") == 0)
			break ;
		else if (line.compare("ADD") == 0)
			all.add(all);
		else if (line.compare("SEARCH") == 0)
			all.search(all);
		else if (!(line.compare("")== 0))
			std::cout << "Invalid cmd -> " << line << std::endl;

	}
	return (0);
}
