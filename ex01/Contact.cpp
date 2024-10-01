/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:31 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/01 13:14:33 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Ingrese los datos del contacto\n";
	set_name();
	set_last_name();
	set_nickname();
	set_secret();
	set_phone();
}

void	Contact::set_name() {
	while (this->first_name.length() < 1)
	{
		std::cout << "Nombre: ";
		std::getline(std::cin, this->first_name);
		if (this->first_name.compare("EXIT") == 0)
			break;
		if (this->first_name.length() < 1)
			std::cout << "Debe ingresar un nombre\n";
	}
}

void	Contact::set_last_name() {
	while (this->last_name.length() < 1)
	{
		std::cout << "Apellido: ";
		std::getline(std::cin, this->last_name);
		if (this->last_name.compare("EXIT") == 0)
			break;
		if (this->last_name.length() < 1)
			std::cout << "Debe ingresar un apellido\n";
	}
}

void	Contact::set_nickname() {
	while (this->nickname.length() < 1)
	{
		std::cout << "Apodo: ";
		std::getline(std::cin, this->nickname);
		if (this->nickname.compare("EXIT") == 0)
			break;
		if (this->nickname.length() < 1)
			std::cout << "Debe ingresar un apodo\n";
	}
}

void	Contact::set_secret() {
	while (this->darkest_secret.length() < 1)
	{
		std::cout << "Secreto mas oscuro: ";
		std::getline(std::cin, this->darkest_secret);
		if (this->darkest_secret.compare("EXIT") == 0)
			break;
		if (this->darkest_secret.length() < 1)
			std::cout << "Debe ingresar un secreto\n";
	}
}

void	Contact::set_phone() {
	while (this->phone_number < 100000000 || this->phone_number > 999999999)
	{
		std::cout << "Telefono: ";
		std::cin >> this->phone_number;
		if (this->phone_number < 100000000 || this->phone_number > 999999999)
			std::cout << "Debe ingresar un numero de telefono valido\n";
	}
}

std::string	Contact::get_name() {
	return this->first_name;
}

std::string	Contact::get_last_name() {
	return this->last_name;
}

std::string	Contact::get_nickname() {
	return this->nickname;
}

std::string	Contact::get_secret() {
	return this->darkest_secret;
}

long	Contact::get_phone() {
	return this->phone_number;
}
