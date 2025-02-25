/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:45:38 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/18 19:46:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		int	index;
		Contact	_contact[8];
	
	public:
			Phonebook();
			~Phonebook();
		
		void	add();
		void	search();
};

#endif
