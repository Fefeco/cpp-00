/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:38:41 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/28 19:12:08 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Contact base constructor" << std::endl;
}

Contact::Contact(std::string _name, std::string _lastname, int _phone) 
	: name(_name), lastname(_lastname), phone(_phone) {
	std::cout << "Contact message from constructor with the following data:" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Lastname: " << this->lastname << std::endl;
	std::cout << "Phone: " << this->phone << std::endl;
}
