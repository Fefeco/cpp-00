/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:19:03 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 22:56:42 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Print.hpp"
#include "colours.hpp"
#include "Contact.hpp"
#include <vector>
#include <cstdlib>
#include <iomanip>

Print::Print(){}

Print::~Print(){}

void Print::print_color(std::string status, std::string msj)
{
	std::cout << status << msj << std::endl << RST;
}

std::string Print::format_string(std::string str)
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

void Print::print_welcome()
{
	system("clear");

	std::cout << "/* ********************************** */\n";
	std::cout << "/*                                    */\n";
	std::cout << "/* Enter command: ADD, SEARCH or EXIT */\n";
	std::cout << "/*                                    */\n";
	std::cout << "/* ********************************** */\n";
}

void Print::print_contact(int index, std::vector<Contact> contacts)
{
		std::cout << "Nombre: " << contacts.at(index).get_name() << std::endl;
		std::cout << "Apellido: " << contacts.at(index).get_last_name() << std::endl;
		std::cout << "Apodo: " << contacts.at(index).get_nickname() << std::endl;
		std::cout << "Secreto mas oscuro: " << contacts.at(index).get_secret() << std::endl;
		std::cout << "Telefono: " << contacts.at(index).get_phone() << std::endl;

}

void Print::print_table(std::vector<Contact> contacts)
{
	print_welcome();
	std::cout << "+" << std::setfill('-')
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(12) << "+\n"
			  << std::setfill(' ');
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|\n";
	std::cout << "+" << std::setfill('-')
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(12) << "+\n"
			  << std::setfill(' ');
	for (size_t i = 0; i < contacts.size(); i++)
	{
		std::cout << "|" << std::setw(10) << i << "|"
			  << std::setw(10) << format_string(contacts.at(i).get_name()) << "|"
			  << std::setw(10) << format_string(contacts.at(i).get_last_name()) << "|"
			  << std::setw(10) << format_string(contacts.at(i).get_nickname()) << "|\n";
	}
	std::cout << "+" << std::setfill('-')
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(12) << "+\n"
			  << std::setfill(' ');
}