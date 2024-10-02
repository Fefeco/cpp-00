/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:18:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/02 17:02:53 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <vector>
# include "Contact.hpp"

class PhoneBook {
	private:
		std::vector<Contact>	contacts;
		std::string				option;
		int						index;

		void					print_welcome();
		std::string				format_string(std::string str);
	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
};

#endif
