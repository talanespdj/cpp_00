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
#include "phonebook.hpp"
#include <iostream>
#include <cstdlib>

Phonebook::Phonebook() {
	this->index = 0;
	return ;

};

Phonebook::~Phonebook() {
	return ;

};

void	Phonebook::add() {
	std::string	line;

	if (this->index == 7)
		this->index = 0;
	while (true) {
		std::cout << "First name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (line.empty())
			std::cout << "Enter a valid first name golmon." << std::endl;
		else {
			this->_contact[this->index].set_f(line);
			break ;
		}
	}
	line.clear();
	while (true) {
		std::cout << "Last name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (line.empty())
			std::cout << "Enter a valid first lastname golmon." << std::endl;
		else {
			this->_contact[this->index].set_l(line);
			break ;
		}
	}
	line.clear();
	while (true) {
		std::cout << "nickname : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (line.empty())
			std::cout << "Enter a valid first nickname golmon." << std::endl;
		else {
			this->_contact[this->index].set_n(line);
			break ;
		}
	}
	line.clear();
	while (true) {
		std::cout << "Phone number : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (line.empty())
			std::cout << "Enter a valid phone number golmon." << std::endl;
		else {
			this->_contact[this->index].set_phone(line);
			break ;
		}
	}
	line.clear();
	while (true) {
		std::cout << "Darkest secret : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (line.empty())
			std::cout << "Enter a valid dark secret golmon." << std::endl;
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
	while (in.size() > 1 || in[0] < '1' || in[0] > '8') {
		std::cout << "Enter a valid number please // 1 to 8" << std::endl;
		std::cout << "- ";
		std::getline(std::cin, in);
	}
	this->_contact[(in[0]) - 49].show_contact();
}
