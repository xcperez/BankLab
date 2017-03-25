#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

Customer Account::getOwner()
{

	return this->_accountOwner;

}
void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	std::string newEntry = "Deposited " + std::to_string(numberOfPennies) + "pennies into " + std::to_string(getAccountNumber());
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	std::string newEntry = "Withdrew " + std::to_string(numberOfPennies) + "pennies into " + std::to_string(getAccountNumber());
}

int Account::getBalance()
{
	return 0;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}