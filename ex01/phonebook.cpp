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
#include "contact.hpp"
#include <iostream>

Phonebook::Phonebook() {
	Contact		contact;

	this->index = 0;
	this->_contact[get_index()] = contact;
	std::cout << "J'appelle mon constructeur qui va construire #build" << std::endl;
	return ;

};

Phonebook::~Phonebook() {
	std::cout << "J'appelle mon desstructeur qui va construire #build" << std::endl;
	return ;

};


void	Phonebook::increment() {
	this->index++;
}

int	Phonebook::get_index() {
	return (this->index);
}

