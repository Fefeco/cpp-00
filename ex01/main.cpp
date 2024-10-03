/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:34:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/03 12:57:52 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	option;

	book.print.menu();
	option = "";
	while (option.compare("3"))
	{
		std::cout << "> ";
		std::cin >> option;
		if (option.compare("1") == 0)
			book.add();
		if (option.compare("2") == 0)
			book.search();
	}
	book.print.menu_width(39, "Good bye!  -  PhoneBook by @fcarranz");
	return (0);
}
