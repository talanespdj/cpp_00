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

Contact::Contact(void) {
	return ;
};

Contact::~Contact() {
}

void	aff_contacts(int n)
{
	// std::cout << this->_index;
	// std::cout << this->_f_name;
	// std::cout << this->_l_name;
	// std::cout << this->_nickname;
	std::cout << std::endl;
	(void)n;
}

void	add_contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string dark_secret)
{
	// this->_f_name = f_name;
	// this->_l_name = l_name;
	// this->_nickname = nickname;
	// this->_phone_number = phone_number;
	// this->_dark_secret = dark_secret;
	(void)f_name;
	(void)l_name;
	(void)nickname;
	(void)phone_number;
	(void)dark_secret;
	return ;
}