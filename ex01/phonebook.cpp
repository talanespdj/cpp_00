/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:44:58 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/17 17:45:34 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"

void input_line() {
        std::getline(std::cin, line);
}

std::string retrieve_line() {
        return (line);
}
