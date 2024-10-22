/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/22 12:50:42 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include "Print.hpp"

PhoneBook::PhoneBook( size_t _max_size, int _current_index ) 
: max_size( _max_size ), current_index(_current_index)
{
}

PhoneBook::~PhoneBook( void ) {}

std::string PhoneBook::search( void ) {
	
	if ( this->current_index == -1 )
		return ( Print::WARNING + "Contact list empty. Tipe ADD to add one" );
	
	int index = -1;
	bool wrong_index = true;
	Print::table( contacts );
	while ( wrong_index ) {
		std::cout << "index > ";
		std::cin >> index;
		if ( std::cin.fail() ) {
			std::cin.clear();
			std::cin.ignore();
			index = -1;
			Print::table( contacts );
			Print::format( Print::ERROR + "Wrong input. Please enter a number" );
		}
		else if ( index < 0 || index >= ( int )this->contacts.size() ) {
			Print::table( contacts );
			Print::format( Print::ERROR + "Index out of bounds. Please enter a valid one" );
			index = -1;
		}
		else
			wrong_index = false;
	}
	Print::menu();
	Print::contact( index, contacts );
	return NULL;
}

std::string PhoneBook::add( void ) {
	
	Contact new_contact;
	std::string input = "";
	int error = 0;

	while ( input.length() < 1 ) {
		Print::menu_width( 45, "NEW CONTACT" );
		if ( error )
			Print::format( Print::ERROR + "Error. Please enter a name" );
		std::cout << "Name: ";
		std::getline( std::cin, input );
		if ( input.length() < 1 )
			error = 1;
	}
	new_contact.set_name( input );

	input = "";
	error = 0;
	while ( input.length() < 1 ) {
		Print::menu_width( 45, "NEW CONTACT" );
		if ( error )
			Print::format( Print::ERROR + "Error. Please enter a last name" );
		std::cout << "Last name: ";
		std::getline( std::cin, input );
		if ( input.length() < 1 )
			error = 1;
	}
	new_contact.set_last_name( input );

	input = "";
	error = 0;
	while ( input.length() < 1 ) {
		Print::menu_width( 45, "NEW CONTACT" );
		if ( error )
			Print::format( Print::ERROR + "Error. Please enter a nickname" );
		std::cout << "Nickname: ";
		std::getline( std::cin, input );
		if ( input.compare("EXIT") == 0 )
			break;
		if ( input.length() < 1 )
			error = 1;
	}
	new_contact.set_nickname( input );

	input = "";
	error = 0;
	while ( input.length() < 1 ) {
		Print::menu_width( 45, "NEW CONTACT" );
		if ( error )
			Print::format( Print::ERROR + "Error. Please enter a secret" );
		std::cout << "Darkest secret: ";
		std::getline( std::cin, input );
		if ( input.length() < 1 )
			error = 1;
	}
	new_contact.set_secret( input );

	input = "";
	error = 0;
	int i;
	while ( input.length() < 1 ) {
		Print::menu_width( 45, "NEW CONTACT" );
		if (error)
			Print::format( Print::ERROR + "Error. Please enter a valid phone number" );
		std::cout << "Phone number: ";
		std::cin >> input;
		i = -1;
		while ( input[++i] ) {
			if ( input[i] < '0' || input[i] > '9' ) {
				error = 1;
				input = "";
				break;
			}
		}
	}
	new_contact.set_phone( input );

	if ( this->contacts.size() == 8 )
		this->contacts.erase( contacts.begin() );
	this->contacts.push_back( new_contact );

	Print::menu();
	return ( Print::SUCCESS + "Contact saved succsessfully" );
}
