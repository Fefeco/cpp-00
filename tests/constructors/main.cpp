/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:46:58 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/28 19:49:13 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Messages.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact1("Juan Cruz", "Avila", 456789);
	Messages	firstmessage;

	std::cout << "Hello World" << std::endl;
	return (0);
}
