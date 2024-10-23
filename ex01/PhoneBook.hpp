/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:18:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/23 13:52:50 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( size_t _max_size, size_t _current_index, size_t amount );
	~PhoneBook( void );

	std::string add( void );
	std::string search( void );

private:

	Contact		contacts[8];
	size_t		max_size;
	size_t		current_index;
	size_t		amount;

	std::string	getStrInput( const char* inputName );
	std::string	getNbInput( std::string& inputName );
	void		exit( void );
};

#endif
