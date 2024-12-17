#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.hpp"
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
};

#endif