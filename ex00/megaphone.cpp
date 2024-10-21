/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:23:18 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/21 11:01:35 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	no_arg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int			curr;

	if (argc == 1)
		std::cout << no_arg;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			curr = 0;
			while (argv[i][curr])
				std::cout << (char)std::toupper(argv[i][curr++]);
		}
	}
	std::cout << std::endl;
	return (0);
}
