/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:16:00 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 22:47:53 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HPP
# define PRINT_HPP
# include <iostream>
# include <vector>
# include <string>
# include "Contact.hpp"
class Print
{
private:
	std::string format_string(std::string str);

public:
	Print();
	~Print();
	void print_table(std::vector<Contact> contacts);
	void print_contact(int index, std::vector<Contact> contacts);
    void print_color(std::string status, std::string msj);
	void print_welcome();

};
#endif