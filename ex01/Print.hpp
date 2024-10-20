/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:16:00 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/20 13:55:10 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HPP
# define PRINT_HPP
# include <iostream>
# include <vector>
# include <string>
# include "Contact.hpp"

# define ERROR "\033[31m"
# define SUCCESS "\033[32m"
# define WARNING "\033[33m"
# define BWH "\033[97m" 
# define WHT "\033[37m"
# define RST "\033[0m"

class Print
{
private:
	static std::string format_string(const std::string& str);

public:
	Print();
	~Print();
	static void table(std::vector<Contact>& contacts);
	static void contact(int index, std::vector<Contact>& contacts);
    static void format(const std::string& status, const std::string& msj);
	static void menu();
	static void menu_width(int length, const std::string& str);
};
#endif
