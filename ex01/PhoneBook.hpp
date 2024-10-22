/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:18:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/22 13:12:16 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
#include <vector>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( size_t _max_size, int _current_index, size_t amount );
	~PhoneBook( void );

	std::string add( void );
	std::string search( void );
	size_t		get_max_size( void );
	int			get_current_index( void );


private:

	Contact		contacts[8];
	size_t		max_size;
	size_t		amount;
	int			current_index;
};

#endif
