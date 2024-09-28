/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:07:00 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/28 19:51:00 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include "Contact.hpp"

class	PhoneBook {
	public:
		Contact	contacts[8];
		PhoneBook();
		PhoneBook(Contact contact);
};
#endif
