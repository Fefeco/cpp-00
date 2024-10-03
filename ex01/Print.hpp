/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:16:00 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/03 12:24:32 by fcarranz         ###   ########.fr       */
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
	std::string format_string(const std::string& str);

public:
	Print();
	~Print();
	void table(std::vector<Contact>& contacts);
	void contact(int index, std::vector<Contact>& contacts);
    void format(const std::string& status, const std::string& msj);
	void menu();
	void menu_width(int length, const std::string& str);
	void table_menu();

};
#endif
