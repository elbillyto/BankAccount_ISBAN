#include <string>
#include "BankAccount.hpp"

using namespace std;

// Initializes a new account with the specified account holder name
// and initial balance.  If the initial balance is omitted, it defaults
// to zero.
BankAccount::BankAccount( const char* holder, int initialBalance )
{
    accountHolder = holder;
    balance = initialBalance;
}

// Returns the current balance in the account.
int BankAccount::getBalance() const
{
    return balance;
}

// Returns true if the account is overdrawn (has a negative balance);
// otherwise, it returns false.
bool BankAccount::isOverdrawn() const
{
    return (balance < 0);
}

// Adds the specified amount to the balance in the account.
void BankAccount::deposit( int value )
{
    balance += value;
}

// Subtracts the specified amount from the balance in the account.
void BankAccount::withdraw( int value )
{
    balance -= value;
}

