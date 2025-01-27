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

void	Contact::show_contact() {
	int	i = -1;

	(void)i;
	if (!get_f()[0]) {

		std::cout << "je sors ici" << std::endl;
		return ;
	}
	std::cout << &index << " |";
	std::cout << get_f() << "|";
	std::cout << get_l() << "|";
	std::cout << get_n() << "|";
	// std::cout << get_phone << "|";
	// std::cout << get_dark << "|";
	std::cout << std::endl;
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