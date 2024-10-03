/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:34:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/03 13:55:01 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "colours.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	option;

	option = "";
	book.print.menu();
	while (option.compare("EXIT") != 0)
	{
		std::cout << "> ";
		std::cin >> option;
		if (option.compare("ADD") == 0)
			book.add();
		else if (option.compare("SEARCH") == 0)
			book.search();
		else if (option.compare("EXIT") != 0)
		{
			book.print.menu();
			book.print.format(ERROR, "Command not found");
		}
	}
	book.print.menu_width(39, "Good bye!  -  PhoneBook by @fcarranz");
	return (0);
}
