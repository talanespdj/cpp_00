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
		std::string	line;
		void input_line() {
			std::getline(std::cin, line);
		}
		std::string retrieve_line() {
			return (line);
		}
		void add() {
		}
};

#endif