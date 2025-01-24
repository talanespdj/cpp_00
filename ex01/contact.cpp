/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:47:47 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/17 17:47:51 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "contact.hpp"
#include <iostream>
#include <string>
#include <cstring>

Contact::Contact() {
};

Contact::~Contact() {
}

void	Contact::add_contact(int id, std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string dark_secret)
{
	this->_id = id;
	this->_f_name = f_name;
	this->_l_name = l_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_dark_secret = dark_secret;
}

int	Contact::not_empty(Contact pers) {
	if (pers._f_name.size() > 0)
	{
		std::cout << "je return 1 l'ancien" << std::endl;
		return (1);
	}
	std::cout << pers._f_name << std::endl;
	return (0);
}



void	Contact::show_contact() {
	int	i = -1;

	// std::cout << "Voici mon first name golmon " << _f_name << std::endl;
	std::cout << _id + 1 << "          |";
	while (++i < 9) {
		if (_f_name[i])
			std::cout << _f_name[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	i = -1;
	while (++i < 9) {
		if (_l_name[i])
			std::cout << _l_name[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	i = -1;
	while (++i < 9) {
		if (_nickname[i])
			std::cout << _nickname[i];
		else
			std::cout << " ";
	}
	std::cout << std::endl;


}