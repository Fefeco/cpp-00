/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:19:03 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/03 12:54:38 by fcarranz         ###   ########.fr       */
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

void Print::format(const std::string& status, const std::string& msj)
{
	std::cout << status << msj << std::endl << RST;
}

std::string Print::format_string(const std::string& str)
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + '.');
}

void Print::menu()
{
	menu_width(39, "Enter command: ADD, SEARCH or EXIT");
}

void Print::menu_width(int length, const std::string& str)
{
	int	pad_l = 0;
	int	pad_r = 0;
	int	diff;

	diff = length - str.length();
	if (diff > 0)
	{
		pad_l = diff / 2;
		pad_r = diff - pad_l;
	}
	system("clear");

	std::cout << "/* " << std::setw(length + 4) << std::setfill('*') << " */\n";
	std::cout << "/* " << std::setw(length + 4) << std::setfill(' ') << " */\n";
	std::cout << "/* " << std::string(pad_l, ' ')
			  << str << std::string(pad_r, ' ' ) << " */\n";
	std::cout << "/* " << std::setw(length + 4) << " */\n";
	std::cout << "/* " << std::setw(length + 5) << std::setfill('*') << " */\n\n";
}

void Print::table_menu()
{
	system("clear");
	menu_width(39, "Enter index to display information");
}

void Print::contact(int index, std::vector<Contact>& contacts)
{
	std::cout << "  Nombre: " << contacts.at(index).get_name() << std::endl;
	std::cout << "  Apellido: " << contacts.at(index).get_last_name() << std::endl;
	std::cout << "  Apodo: " << contacts.at(index).get_nickname() << std::endl;
	std::cout << "  Secreto mas oscuro: " << contacts.at(index).get_secret() << std::endl;
	std::cout << "  Telefono: " << contacts.at(index).get_phone() << std::endl;

}

void Print::table(std::vector<Contact>& contacts)
{
	table_menu();
	std::cout << "+" << std::setfill('-')
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::endl
			  << std::setfill(' ');
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|"
			  << std::endl;

	std::cout << "+" << std::setfill('-')
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::endl
			  << std::setfill(' ');

	for (size_t i = 0; i < contacts.size(); i++)
	{
		std::cout << "|" << std::setw(10) << i << "|"
			  << std::setw(10) << format_string(contacts.at(i).get_name()) << "|"
			  << std::setw(10) << format_string(contacts.at(i).get_last_name()) << "|"
			  << std::setw(10) << format_string(contacts.at(i).get_nickname()) << "|"
			  << std::endl;
	}

	std::cout << "+" << std::setfill('-')
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::setw(11) << "+"
			  << std::endl
			  << std::setfill(' ');
}
