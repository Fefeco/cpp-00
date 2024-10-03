/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/03 17:58:41 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
	print.menu();
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search()
{
	if (this->contacts.size() == 0)
	{
		print.menu();
		print.format(WARNING, "Contact list empty. Tipe ADD to add one");
		return ;
	}
	int index = -1;
	bool wrong_index = true;
	print.table(contacts);
	while (wrong_index)
	{
		std::cout << "index > ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			index = -1;
			print.table(contacts);
			print.format(ERROR, "Wrong input. Please enter a number");
		}
		else if (index < 0 || index >= (int)this->contacts.size())
		{
			print.table(contacts);
			print.format(ERROR, "Index out of bounds. Please enter a valid one");
			index = -1;
		}
		else
			wrong_index = false;
	}
	print.menu();
	print.contact(index, contacts);
}

void PhoneBook::add()
{
	Contact new_contact;
	std::string input = "";
	int error = 0;

	std::cin.ignore();
	while (input.length() < 1)
	{
		print.menu_width(39, "NEW CONTACT");
		if (error)
			print.format(ERROR, "Error. Please enter a name");
		std::cout << "Name: ";
		std::getline(std::cin, input);
		if (input.length() < 1)
			error = 1;
	}
	new_contact.set_name(input);

	input = "";
	error = 0;
	while (input.length() < 1)
	{
		print.menu_width(39, "NEW CONTACT");
		if (error)
			print.format(ERROR, "Error. Please enter a last name");
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if (input.length() < 1)
			error = 1;
	}
	new_contact.set_last_name(input);

	input = "";
	error = 0;
	while (input.length() < 1)
	{
		print.menu_width(39, "NEW CONTACT");
		if (error)
			print.format(ERROR, "Error. Please enter a nickname");
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			break;
		if (input.length() < 1)
			error = 1;
	}
	new_contact.set_nickname(input);

	input = "";
	error = 0;
	while (input.length() < 1)
	{
		print.menu_width(39, "NEW CONTACT");
		if (error)
			print.format(ERROR, "Error. Please enter a secret");
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		if (input.length() < 1)
			error = 1;
	}
	new_contact.set_secret(input);

	input = "";
	error = 0;
	int i;
	while (input.length() < 1)
	{
		print.menu_width(39, "NEW CONTACT");
		if (error)
			print.format(ERROR, "Error. Please enter a valid phone number");
		std::cout << "Phone number: ";
		std::cin >> input;
		i = -1;
		while (input[++i])
		{
			if (input[i] < '0' || input[i] > '9')
			{
				error = 1;
				input = "";
				break;
			}
		}
	}
	new_contact.set_phone(input);

	if (this->contacts.size() == 8)
		this->contacts.erase(contacts.begin());
	this->contacts.push_back(new_contact);

	print.menu();
	print.format(SUCCESS, "Contact saved succsessfully");
}
