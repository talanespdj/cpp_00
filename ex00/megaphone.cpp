/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 01:38:54 by tespandj          #+#    #+#             */
/*   Updated: 2024/12/13 00:52:41 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

std::string	UP_stringcase(std::string in)
{
	int	i = -1;

	while (!in.empty() && in[++i])
		in[i] = toupper(in[i]);
	return (in);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << std:: endl;
	else
	{
		i = 0;
		while (argv[++i])
			std:: cout << UP_stringcase(argv[i]);
		std:: cout << std:: endl;
	}
	return (0);
}
