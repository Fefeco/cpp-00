/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/01 16:00:08 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
	print_welcome();
	std::cin >> this->option;
	if (option.compare("ADD") == 0)
	{
		Contact	contact;
		this->contacts.push_back(contact);
		this->option = "";
	}
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Called" << std::endl;
}

void	PhoneBook::print_welcome(void) {
	std::cout << "/* ********************************** */\n";
	std::cout << "/*                                    */\n";
	std::cout << "/* Enter command: ADD, SEARCH or EXIT */\n";
	std::cout << "/*                                    */\n";
	std::cout << "/* ********************************** */\n";
	std::cout << "> ";
}
