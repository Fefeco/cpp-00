/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/23 18:29:37 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Print.hpp"

PhoneBook::PhoneBook( size_t _max_size ) 
: max_size( _max_size )
{
	current_index = 0;
	amount = 0;
}

PhoneBook::~PhoneBook( void ) {}


void PhoneBook::exit( void ) {
	Print::menu_width( 45, "Good bye!  -  PhoneBook by @fcarranz" );
	std::exit(EXIT_FAILURE);
}

std::string	PhoneBook::getStrInput( const char* inputName ) {
	std::string userInput;
	std::string	msj;

	while ( userInput.empty() ) {
		Print::menu_width( 45, "NEW CONTACT" );
		
		if ( !msj.empty() ) {
			Print::format( msj );
			msj.clear();
		}
			
		std::cout << inputName << ": " << std::flush;
		std::getline( std::cin, userInput );
		
		if ( std::cin.eof() )
			this->exit();
		else if ( userInput.empty() )
			msj = Print::ERROR + "Error. Please enter a " + inputName;
	}
	return userInput;
}

std::string	PhoneBook::getNbInput( const char* inputName ) {
	std::string userInput;
	std::string	msj;
	int 		i;
	
	while ( userInput.empty() ) {
		
		Print::menu_width( 45, "NEW CONTACT" );
		if ( !msj.empty() )
			Print::format( msj );
			
		std::cout << inputName << ": " << std::flush;
		std::getline( std::cin, userInput);

		if ( std::cin.eof() )
			this->exit();
		else if ( userInput.empty() )
			msj = Print::ERROR + "Error. Please enter a " + inputName;
		
		i = -1;
		while ( userInput[++i] ) {
			
			if ( userInput[i] < '0' || userInput[i] > '9' ) {
				userInput.clear();
				msj = Print::ERROR + "Error. Please enter a valid " + inputName;
				break;
			}
			
		}
	}
	return userInput;
}


std::string PhoneBook::add( void ) {
	
	Contact 	new_contact;

	new_contact.set_name( this->getStrInput( "Name" ) );
	new_contact.set_last_name( this->getStrInput( "Last name" ) );
	new_contact.set_nickname( this->getStrInput( "Nickname" ) );
	new_contact.set_secret( this->getStrInput( "Darkest secret" ) );
	new_contact.set_phone( this->getNbInput( "Phone number" ) );

	if ( this->current_index == 8 )
		this->current_index = 0;
	this->contacts[current_index] = new_contact;
	this->current_index++;
	if ( amount < 8 )
		this->amount++;

	return ( Print::SUCCESS + "Contact saved succsessfully" );
}

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
