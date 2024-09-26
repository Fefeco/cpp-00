/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:45 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/26 17:06:51 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string buff;

	std::cout << "Hello there!" << std::endl;
	std::cout << "Introduce some thought: ";
	std::getline(std::cin, buff);
	std::cout << "You entered: [" << buff << "]" << std::endl;
	return (0);
}
