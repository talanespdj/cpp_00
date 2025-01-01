/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:45:10 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/17 17:45:14 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP

# pragma once 
# include <iostream>
# include <string>
# include <cstring>

class Contact
{
	private:
		std::string	_f_name;
		std::string	_l_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_dark_secret;
	
	public:
			Contact();
			~Contact();

		void	aff_contacts(int n);
		void	add_contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string dark_secret);
};



#endif
