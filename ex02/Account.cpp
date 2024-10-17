/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:36:11 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/17 11:19:29 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
// #include <utility>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}
int	Account::getTotalAmount( void ) {
	return _totalAmount;
}
int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

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


void Account::displayAccountsInfos() {
	t::_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts() << ";"
			  << "total:" << t::getTotalAmount() << ";"
			  << "deposits:" << t::getNbDeposits() << ";"
			  << "withdrawals:" << t::getNbWithdrawals()
			  << std::endl;
}

void	Account::displayStatus( void ) const {
	t::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals
			  << std::endl;
}


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
// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
