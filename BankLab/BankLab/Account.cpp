#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	//TODO: add message to the log
	std::string message = "Deposited " + std::to_string(numberOfPennies) + " into Account " + std::to_string(getAccountNumber());
	_log.push_back(message);
}


void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	//TODO: add message to the log
	//log = "Withdrew " + std::to_string(numberOfPennies) + " into Account " + std::to_string(getAccountNumber());
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

std::string Account::getAccountName()
{
	return _accountOwner.GetName();
}
