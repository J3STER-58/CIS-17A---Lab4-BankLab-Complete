#include "Bank.h"

Bank::Bank(std::string name) : _name(name)
{
}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

std::string Bank::ShowAccounts()
{
	std::string output = "Accounts for " + _name + "\n";
	for (Account account : _accounts)
	{
		//TODO: Account Number - Lastname, Firstname: balance
		output += std::to_string(account.getAccountNumber()) + " - "
			+ account.getAccountName() + ": " + std::to_string(account.getBalance())  + "\n";
	}
	return output;
}

std::string Bank::ListAccounts()
{
	std::string output = "Accounts for " + _name + "\n";
	int index = 0;
	for (Account account : _accounts)
	{
		output += std::to_string(index + 1) + ") " + std::to_string(account.getAccountNumber()) += "\n";
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account &account : _accounts) {
		if (account.getAccountNumber() == accountNumber) {
			account.Deposit(amount);
			return;
		}
	}
	return;
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (Account &account : _accounts) {
		if (account.getAccountNumber() == accountNumber) {
			account.Withdraw(amount);
			return;
		}
	}
	return;
}


