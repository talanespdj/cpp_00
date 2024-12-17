/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:45:38 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/17 17:45:40 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <string>
# include <cstring>

class Phonebook
{
	private:
		Contact	_contact[8];

	public:
		Phonebook();
		void input_line();
		std::string	line;
		std::string retrieve_line();
		void add();

};

#endif
