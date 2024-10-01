/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:04:10 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/01 12:33:05 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class	Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		long		phone_number;
		void		set_name();
		void		set_last_name();
		void		set_nickname();
		void		set_secret();
		void		set_phone();
	public:
		Contact();
		std::string	get_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_secret();
		long		get_phone();
};
#endif
