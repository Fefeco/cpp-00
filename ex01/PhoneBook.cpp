/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/23 12:38:42 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "PhoneBook.hpp"
#include "Print.hpp"

PhoneBook::PhoneBook( size_t _max_size, size_t _current_index, size_t _amount ) 
: max_size( _max_size ), current_index( _current_index ), amount( _amount )
{
}

PhoneBook::~PhoneBook( void ) {}

std::string PhoneBook::search( void ) {
	
	std::string msj;
	size_t		index;
	
	if ( this->amount == 0 )
		return ( Print::WARNING + "Contact list empty. Tipe ADD to add one" );
	
	while ( this->amount ) {

		index = this->amount;
		Print::table( contacts, this->amount );
		if (!msj.empty())
		{
			Print::format( msj );
			msj.clear();
		}
				
		std::cout << "index > " << std::flush;
		std::cin >> index;

		if ( std::cin.eof() )
			return "";

		if ( std::cin.fail() ) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			msj = Print::ERROR + "Wrong input. Please enter a number";
			continue;
		}

		if ( index < this->amount )
			break;
			
		msj = Print::ERROR + "Index out of bounds. Please enter a valid one";
	}
	
	Print::menu_width( 45, "CONTACT INFO" );
	Print::contact( contacts[index] );
	return "";
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

	if ( this->current_index == 8 )
		this->current_index = 0;
	if ( this->amount == 8 )
		delete &this->contacts[this->current_index];
	this->contacts[current_index] = new_contact;
	this->current_index++;
	if ( amount < 8 )
		this->amount++;

	Print::menu();
	return ( Print::SUCCESS + "Contact saved succsessfully" );
}
