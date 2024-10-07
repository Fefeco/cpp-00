/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:36:11 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/07 15:34:39 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

void Account::_displayTimestamp( void ) {
    std::time_t current_time = std::time( NULL );
    struct tm   *time = std::localtime(&current_time);

    std::cout << "["
              << time->tm_year + 1900 << std::setfill('0')
              << std::setw(2) << time->tm_mon + 1
              << std::setw(2) << time->tm_mday
              << "_"
              << std::setw(2) << time->tm_hour    
              << std::setw(2) << time->tm_min    
              << std::setw(2) << time->tm_sec
              << "]"
              << std::endl;
}
// [19920104_091532]