/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:17:57 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/28 19:03:34 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact {
	public:
		std::string	name;
		std::string	lastname;
		int			phone;

		Contact();
		Contact(std::string _name, std::string _lastname, int phone);
};
#endif
