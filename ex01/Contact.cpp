/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:15:31 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 16:33:00 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void	Contact::set_name(std::string _name) {
	this->first_name = _name;
}

void	Contact::set_last_name(std::string _last_name) {
	this->last_name = _last_name;
}

void	Contact::set_nickname(std::string _nickname) {
	this->nickname = _nickname;
}

void	Contact::set_secret(std::string _secret) {
	this->darkest_secret = _secret;
}

void	Contact::set_phone(std::string _phone) {
	this->phone_number = _phone;
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

std::string	Contact::get_phone() {
	return this->phone_number;
}
