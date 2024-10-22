/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:19:03 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/22 13:08:36 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Print.hpp"
#include "Contact.hpp"
#include <vector>
#include <cstdlib>
#include <iomanip>

Print::Print( void ) {}

Print::~Print( void ) {}

const std::string Print::ERROR 		= "\033[31m";
const std::string Print::SUCCESS 	= "\033[32m";
const std::string Print::WARNING 	= "\033[33m";
const std::string Print::BWH 		= "\033[97m";
const std::string Print::WHT 		= "\033[37m";

void Print::format( const std::string &msj ) {
	std::cout << msj << std::endl << RST;
}

std::string Print::format_string( const std::string &str ) {
	if ( str.length() <= 10 )
		return str;
	return ( str.substr(0, 9) + '.' );
}

void Print::menu() {
	menu_width( 45, "Enter command: ADD, SEARCH or EXIT" );
}

void Print::menu_width( int length, const std::string &str ) {
	
	int pad_l = 0;
	int pad_r = 0;
	int diff = length - str.length() - 6;

	if (diff > 0)
	{
		pad_l = diff / 2;
		pad_r = diff - pad_l;
	}

	std::string start = "/* ";
	std::string end = " */\n";
	std::string start_pad = start + std::string(pad_l, ' ');
	std::string end_pad = std::string(pad_r, ' ') + end;
	std::string blank_line = start + std::string(length - 6, ' ') + end;
	std::string separator = start + std::string(length - 6, '*') + end;

	system( "clear" );
	std::cout << separator;
	std::cout << blank_line;
	std::cout << start_pad << str << end_pad;
	std::cout << blank_line;
	std::cout << separator;
}

void Print::contact( int index, std::vector<Contact> &contacts ) {
	
	std::cout << BWH << "  Name: " << RST
			  << contacts.at( index ).get_name() << std::endl;
	std::cout << BWH << "  Last name: " << RST
			  << contacts.at( index ).get_last_name() << std::endl;
	std::cout << BWH << "  Nickname: " << RST
			  << contacts.at( index ).get_nickname() << std::endl;
	std::cout << BWH << "  Darkest secret: " << RST
			  << contacts.at( index ).get_secret() << std::endl;
	std::cout << BWH << "  Phone number: " << RST
			  << contacts.at( index ).get_phone() << std::endl;
	
	std::cout << "Press any key to continue...";
	std::cin.get();
	std::cin.ignore();
}

void Print::table( Contact* contacts ) {
	
	std::string separator = "+----------+----------+----------+----------+\n";
	
	system( "clear" );
	menu_width( 45, "Enter index to display information" );

	std::cout << separator;
	std::cout << "|" << std::setw( 10 ) << "Index" << "|"
			  << std::setw( 10 ) << "First name" << "|"
			  << std::setw( 10 ) << "Last name" << "|"
			  << std::setw( 10 ) << "Nickname" << "|" << std::endl;
	std::cout << separator;

	for ( int i = 0; i < contacts[i].get_current_index() ) {
		std::cout << "|" << std::setw( 10 ) << i << "|"
				  << std::setw( 10 ) << format_string(contacts.at(i).get_name()) << "|"
				  << std::setw( 10 ) << format_string(contacts.at(i).get_last_name()) << "|"
				  << std::setw( 10 ) << format_string(contacts.at(i).get_nickname()) << "|"
				  << std::endl;
	}

	std::cout << separator;
}
