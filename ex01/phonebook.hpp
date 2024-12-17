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