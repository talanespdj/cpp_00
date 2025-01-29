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
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstring>

Contact::Contact() {
};

Contact::~Contact() {
}

int	Contact::show_contact() {
	if (get_f().empty()) {
		return (0) ;
	}
	std::cout << get_id() << "         |";
	ten_char(get_f());
	std::cout << "|";
	ten_char(get_l());
	std::cout << "|";
	ten_char(get_n());
	std::cout << std::endl;
	return (1);
}

void	Contact::ten_char(std::string data) {
	if (data.size() < 10) {
		std::cout << data;
		for (int i = 10 - data.size(); i > 0; i--)
			std::cout << " ";
	}
	else 
		for (int i = 0; i < 10; i++)
			std::cout << data[i];
}

int		Contact::get_id() {
	return (this->_id);
}

std::string	Contact::get_f() {
	return (this->_f_name);
}

std::string	Contact::get_l() {
	return (this->_l_name);
}

std::string	Contact::get_n() {
	return (this->_nickname);
}

std::string	Contact::get_phone() {
	return (this->_phone_number);
}

std::string	Contact::get_dark() {
	return (this->_dark_secret);
}

void		Contact::set_id(int id) {
	this->_id = id;
}

void	Contact::set_f(std::string data) {
	this->_f_name = data;
}

void	Contact::set_l(std::string data) {
	this->_l_name = data;
}

void	Contact::set_n(std::string data) {
	this->_nickname = data;
}

void	Contact::set_phone(std::string data) {
	this->_phone_number = data;
}

void	Contact::set_dark(std::string data) {
	this->_dark_secret = data;
}