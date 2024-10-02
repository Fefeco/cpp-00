/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:18:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 22:44:19 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <vector>
# include <cstdlib>
# include "Contact.hpp"
# include "Print.hpp"

class PhoneBook
{
private:
	std::vector<Contact> contacts;
	std::string option;
	
public:
	PhoneBook();
	~PhoneBook();
	Print		print;

	void add();
	void search();
};

#endif
