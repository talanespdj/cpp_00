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
#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstring>

class Contact
{
	private:
		int		_id;
		std::string	_f_name;
		std::string	_l_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_dark_secret;
	
	public:
			Contact();
			~Contact();

		int		show_contact();
		int		get_id();
		std::string	get_f();
		std::string	get_l();
		std::string	get_n();
		std::string	get_phone();
		std::string	get_dark();
		void		set_id(int id);
		void		set_f(std::string data);
		void		set_l(std::string data);
		void		set_n(std::string data);
		void		set_phone(std::string data);
		void		set_dark(std::string data);
		void		ten_char(std::string data);
};

#endif