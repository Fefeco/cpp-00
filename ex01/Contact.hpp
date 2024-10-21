/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:04:10 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/21 14:46:35 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__
#include <iostream>
#include <string>

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //

class Contact {

public:

	Contact( void );
	~Contact( void );

	void set_name( std::string _name );
	void set_last_name( std::string _last_name );
	void set_nickname( std::string _nickname );
	void set_secret( std::string _secret );
	void set_phone( std::string _phone );

	std::string get_name( void );
	std::string get_last_name( void );
	std::string get_nickname( void );
	std::string get_secret( void );
	std::string get_phone( void );


private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

};
#endif
