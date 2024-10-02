/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:34:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 17:35:25 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	option;

	option = "";
	while (option.compare("2"))
	{
		std::cout << "> ";
		std::cin >> option;
		if (option.compare("ADD") == 0)
			book.add();
		if (option.compare("1") == 0)
			book.search();
	}
	std::cout << "Good bye!" << std::endl;
	return (0);
}
