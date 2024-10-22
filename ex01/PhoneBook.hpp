/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:18:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/22 12:48:30 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
#include <vector>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( size_t _max_size, int _current_index );
	~PhoneBook();

	std::string add();
	std::string search();


private:

	Contact*	contacts[8];
	size_t		max_size;
	int			current_index;
};

#endif
