/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:43:52 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/28 19:44:13 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook base constructor" << std::endl;
}

PhoneBook::PhoneBook(Contact _contact) {
		contacts[0] = _contact;
		std::cout << "Constructor with data. We have:" << std::endl;
		std::cout << "Name: " << this->contacts[0].name << std::endl;
		std::cout << "Lastname: " << this->contacts[0].lastname << std::endl;
		std::cout << "Phone: " << this->contacts[0].phone << std::endl;
}
