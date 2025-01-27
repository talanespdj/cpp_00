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

Phonebook::Phonebook() {
	this->index = 0;
	// std::cout << "J'appelle mon constructeur qui va construire #build" << std::endl;
	return ;

};

Phonebook::~Phonebook() {
	// std::cout << "J'appelle mon desstructeur qui va construire #build" << std::endl;
	return ;

};

void	Phonebook::add(Phonebook all) {
	
	std::string	line;

	if (index > 8)
		index = 0;
	while (true) {
		std::cout << "First name : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		if (line.empty())
			std::cout << "Enter a valid first name golmon." << std::endl;
		else {
			all._contact[this->index].set_f(line);
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
			all._contact[this->index].set_l(line);
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
			all._contact[this->index].set_n(line);
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
			all._contact[this->index].set_phone(line);
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
			all._contact[this->index].set_dark(line);
			break ;
		}
	}
	line.clear();
	all._contact[this->index].set_id(this->index + 1);
	all._contact[this->index].show_contact();
	this->index++;
}

void	Phonebook::search(Phonebook all) {
	std::string	in;

	for (int x = 0; x < 8; x++)
		all._contact[x].show_contact();
	std::cout << "- ";
	std::getline(std::cin, in);
	while (in.size() > 1 || in[0] < '1' || in[0] > '8') {
		std::cout << "Enter a valid number please // 1 to 8" << std::endl;
		std::cout << "- ";
		std::getline(std::cin, in);
	}
	
	(void)all;

}
	// if (in.compare("1") || in.compare("2"), in.compare("3"), in.compare("4"), in.compare("5"), in.compare("6"), in.compare("7"), in.compare("8"))
