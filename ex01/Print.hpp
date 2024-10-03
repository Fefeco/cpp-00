/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:16:00 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/03 18:01:42 by fcarranz         ###   ########.fr       */
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
	std::string format_string(const std::string& str);

public:
	Print();
	~Print();
	void table(std::vector<Contact>& contacts);
	void contact(int index, std::vector<Contact>& contacts);
    void format(const std::string& status, const std::string& msj);
	void menu();
	void menu_width(int length, const std::string& str);
};
#endif
