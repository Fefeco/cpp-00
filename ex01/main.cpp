/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:34:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/20 13:58:14 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Print.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	option;

	option = "";
	Print::menu();
	while (option.compare("EXIT") != 0)
	{
		std::cout << "> ";
		std::cin >> option;
		if (std::cin.eof())
			break;
		if (option.compare("ADD") == 0)
			book.add();
		else if (option.compare("SEARCH") == 0)
			book.search();
		else if (option.compare("EXIT") != 0)
		{
			Print::menu();
			Print::format(ERROR, "Command not found");
		}
	}
	Print::menu_width(45, "Good bye!  -  PhoneBook by @fcarranz");
	return (0);
}
