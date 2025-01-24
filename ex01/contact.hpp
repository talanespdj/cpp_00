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

		// int	not_empty();
		int	not_empty(Contact pers);
		void	show_contact();
		void	add_contact(int id, std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string dark_secret);
};

#endif