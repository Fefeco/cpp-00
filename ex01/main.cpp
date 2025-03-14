/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:34:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/23 20:14:56 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Print.hpp"

int	main( void )
{
	PhoneBook	book(8);
	std::string	option;
	std::string	msj;

	while ( option.compare("EXIT") != 0 )
	{
		Print::menu();
		if ( !msj.empty() ) {
			Print::format( msj );
			msj.clear();
		}
		std::cout << "> " << std::flush;
		std::getline( std::cin, option );
		
		if ( std::cin.eof() )
			break;
		
		if ( option.compare( "ADD" ) == 0 )
			msj = book.add();
		else if ( option.compare( "SEARCH" ) == 0 )
			msj = book.search();
		else
			msj = Print::ERROR + "Command not found";
	}
	Print::menu_width( 45, "Good bye!  -  PhoneBook by @fcarranz" );
	return 0;
}
