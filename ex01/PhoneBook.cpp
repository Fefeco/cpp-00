/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 17:38:19 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
	print_welcome();
//	this->contacts.reserve(8);
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::print_welcome() {
	std::cout << "/* ********************************** */\n";
	std::cout << "/*                                    */\n";
	std::cout << "/* Enter command: ADD, SEARCH or EXIT */\n";
	std::cout << "/*                                    */\n";
	std::cout << "/* ********************************** */\n";
}

std::string	PhoneBook::format_string(std::string str) {
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

void	PhoneBook::search() {

	std::cout << "+" << std::setfill('-') 
		<< std::setw(10) << "+"
		<< std::setw(10) << "+";
		<< std::setw(10) << "+";
		<< std::setw(10) << "+\n";
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|\n";
	std::cout << std::setfill('_') << std::setw(40) << "_" ;
}

void	PhoneBook::add() {
	Contact		new_contact;
	std::string	input;

	input = "";
	while (input.length() < 1)
	{
		std::cout << "Nombre: ";
		std::getline(std::cin, input);
		if (input.length() < 1)
			std::cout << "Debe ingresar un nombre\n";
	}
	new_contact.set_name(input);

	input = "";
	while (input.length() < 1)
	{
		std::cout << "Apellido: ";
		std::getline(std::cin, input);
		if (input.length() < 1)
			std::cout << "Debe ingresar un apellido\n";
	}
	new_contact.set_last_name(input);

	input = "";
	while (input.length() < 1)
	{
		std::cout << "Apodo: ";
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			break;
		if (input.length() < 1)
			std::cout << "Debe ingresar un apodo\n";
	}
	new_contact.set_nickname(input);

	input = "";
	while (input.length() < 1)
	{
		std::cout << "Secreto mas oscuro: ";
		std::getline(std::cin, input);
		if (input.length() < 1)
			std::cout << "Debe ingresar un secreto\n";
	}
	new_contact.set_secret(input);

	input = "";
	int	i;
	while (input.length() < 1)
	{
		std::cout << "Telefono: ";
		std::cin >> input;
		i = -1;
		while (input[++i])
		{
			if (input[i] <= '0' || input[i] >= '9')
			{
				std::cout << "Debe ingresar un numero de telefono valido\n";
				input = "";
				break;
			}
		}
	}
	new_contact.set_phone(input);

	if (this->contacts.size() == 8)
		this->contacts.erase(contacts.begin());
	this->contacts.push_back(new_contact);
}
