/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:04:10 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 20:20:48 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

public:
	Contact();
	~Contact();

	void set_name(std::string _name);
	void set_last_name(std::string _last_name);
	void set_nickname(std::string _nickname);
	void set_secret(std::string _secret);
	void set_phone(std::string _phone);

	std::string get_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_secret();
	std::string get_phone();
};
#endif
