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
	this->fullness = 0;
	this->index = 0;
	// std::cout << "J'appelle mon constructeur qui va construire #build" << std::endl;
	return ;

};

Phonebook::~Phonebook() {
	// std::cout << "J'appelle mon desstructeur qui va construire #build" << std::endl;
	return ;

};

void	Phonebook::add(Phonebook all) {
	
	Contact		tmp;
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	dark_secret;

	if (all.get_fullness() > 8) {
		std::cout << "The phonebook is full." << std::endl;
		return ;
	}
	std::cout << "First name : ";
	std::getline(std::cin, f_name);
	std::cout << "Last name : ";
	std::getline(std::cin, l_name);
	std::cout << "nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, dark_secret);
	tmp.add_contact(this->index, f_name, l_name, nickname, phone_number, dark_secret);
	// while (all._contact)
	tmp.show_contact();
	all._contact[this->index] = tmp;
	// all.fuller();
	this->index++;
	this->fullness++;
	// std::cout << "index == " << index << " // fullness == " << fullness << std::endl;
}

void	Phonebook::search(Phonebook all) {
	std::string	in;
	// int		i = -1;

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

void	Phonebook::fuller() {
	this->fullness++;
}

void	Phonebook::lesser() {
	this->fullness--;
}

int	Phonebook::get_fullness() {
	return(this->fullness);
}

int	Phonebook::nul() {
	if (this->fullness == 0)
		return (1);
	return (0);
}