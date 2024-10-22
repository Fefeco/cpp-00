/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:16:00 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/22 13:10:01 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRINT_HPP__
#define __PRINT_HPP__
#include <iostream>
#include <vector>
#include <string>
#include "Contact.hpp"


#define RST 	"\033[0m"

class Print {

public:

	const static std::string ERROR;
	const static std::string SUCCESS;
	const static std::string WARNING;
	const static std::string BWH;
	const static std::string WHT;

	static void menu();
	static void menu_width( int length, const std::string& str );
	static void table( Contact* contacts, int amount );
	static void contact( int index, std::vector<Contact>& contacts );
    static void format( const std::string& msj );


private:

	Print();
	~Print();
	static std::string format_string( const std::string& str );

};
#endif
