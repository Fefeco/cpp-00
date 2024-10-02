/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 23:02:46 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include "colours.hpp"

PhoneBook::PhoneBook()
{
	print.print_welcome();
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search()
{
	if (this->contacts.size() == 0)
	{
		print.print_welcome();
		std::cout << "Contact list empty. Tipe ADD to add one\n";
		return ;
	}
	int index = -1;
	bool wrong_index = true;
	print.print_table(contacts);
	while (wrong_index)
	{
		std::cout << "index > ";
		std::cin >> index;
		if (index < 0 || index >= (int)this->contacts.size())
		{
			print.print_table(contacts);
			print.print_color(WRONG, "Index out of bounds. Please enter a valid one");
		}
		else
			wrong_index = false;
	}
	print.print_welcome();
	print.print_contact(index, contacts);
}

void PhoneBook::add()
{
	Contact new_contact;
	std::string input;

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
	int i;
	while (input.length() < 1)
	{
		std::cout << "Telefono: ";
		std::cin >> input;
		i = -1;
		while (input[++i])
		{
			if (input[i] < '0' || input[i] > '9')
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

	print.print_welcome();
	print.print_color(SUCCESS, "Contact saved succsessfully");
}
