/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:17:22 by fcarranz          #+#    #+#             */
/*   Updated: 2024/09/26 16:25:09 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const char	*print_scope(void)
{
	return ("Global scope\n");
}

namespace	foo {
	const char	*print_scope(void)
	{
		return ("Foo scope\n");
	}
}

namespace	bar {
	const char	*print_scope(void)
	{
		return ("Bar scope\n");
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Need to send 1, 2 or 3\n";
		return (1);
	}
	if (argv[1][0] == '1')
		std::cout << ::print_scope();
	if (argv[1][0] == '2')
		std::cout << foo::print_scope();
	if (argv[1][0] == '3')
		std::cout << bar::print_scope();
	return (0);
}
