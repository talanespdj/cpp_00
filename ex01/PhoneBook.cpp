/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:44:58 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/18 19:50:46 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

Phonebook::Phonebook() {
	this->index = 0;
	return ;

};

Phonebook::~Phonebook() {
	return ;

};

static inline bool	invalid_line(const std::string &line)
{
	if (line.empty())
		return (true);
	for (std::string::const_iterator it = line.begin(); it != line.end() ; ++it)
		if (!std::isalnum(*it) && *it != ' ' && *it != '_' && *it != '-' && *it != '+')
			return (true);
	return (false);
}

void	Phonebook::add() {
	std::string	line;

	if (this->index == 8)
		this->index = 0;
	while (true) {
		std::cout << "First name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (invalid_line(line))
			std::cout << "Enter a valid first name." << std::endl;
		else {
			this->_contact[this->index].set_f(line);
			break ;
		}
	}
	while (true) {
		std::cout << "Last name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (invalid_line(line))
			std::cout << "Enter a valid first lastname." << std::endl;
		else {
			this->_contact[this->index].set_l(line);
			break ;
		}
	}
	while (true) {
		std::cout << "nickname : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (invalid_line(line))
			std::cout << "Enter a valid first nickname." << std::endl;
		else {
			this->_contact[this->index].set_n(line);
			break ;
		}
	}
	while (true) {
		std::cout << "Phone number : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (invalid_line(line))
			std::cout << "Enter a valid phone number." << std::endl;
		else {
			this->_contact[this->index].set_phone(line);
			break ;
		}
	}
	while (true) {
		std::cout << "Darkest secret : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (invalid_line(line))
			std::cout << "Enter a valid dark secret." << std::endl;
		else {
			this->_contact[this->index].set_dark(line);
			break ;
		}
	}
	this->_contact[this->index].set_id(this->index + 1);
	this->index++;
}

void	Phonebook::search() {
	std::string	in;
	int	c = 0;

	for (int x = 0; x < 8; x++)
		c += this->_contact[x].show_contact();
	if (c == 0) {
		std::cout << "No contact registered. Tap ADD to add one." << std::endl;
		return ;
	}
	std::cout << "- ";
	std::getline(std::cin, in);
	if (std::cin.eof())
		exit(1);
	while (in.size() > 1 || in[0] < '1' || in[0] > '8') {
		if (std::cin.eof())
			exit(1);
		std::cout << "Enter a valid index, 1 to 8." << std::endl;
		std::cout << "- ";
		std::getline(std::cin, in);
	}
	if (_contact[(in[0]) - 49].get_f().empty()) {
		std::cout << "No contact registered at this index." << std::endl;
		return ;
	}
	std::cout << "First name : " << _contact[(in[0]) - 49].get_f() << std::endl;
	std::cout << "Last name : " << _contact[(in[0]) - 49].get_l() << std::endl;
	std::cout << "Nickname : " << _contact[(in[0]) - 49].get_n() << std::endl;
}
