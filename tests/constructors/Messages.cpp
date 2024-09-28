/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:32:01 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/28 18:36:00 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Messages.hpp"

Messages::Messages() {
	std::cout << "Messages base constructor" << std::endl;
}

Messages::Messages(std::string message) {
	std::cout << "Messages constructor with message: ";
	std::cout << message << std::endl;
}
