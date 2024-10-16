/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:36:11 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/16 22:33:35 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
// #include <utility>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit ) 
    : _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    this->_accountIndex = t::_nbAccounts;
    ++t::_nbAccounts;
    t::_totalAmount += this->_amount;
    t::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "created" << std::endl;
}

Account::~Account( void ){}

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
              << "] ";
}
// [19920104_091532] index:0;amount:42;created