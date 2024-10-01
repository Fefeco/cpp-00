/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:18:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/01 15:36:17 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <vector>
# include "Contact.hpp"

class PhoneBook {
	private:
		std::vector<Contact>	contacts;
		void					print_welcome();
		std::string				option;
	public:
		PhoneBook(void);
		~PhoneBook(void);
};

#endif
