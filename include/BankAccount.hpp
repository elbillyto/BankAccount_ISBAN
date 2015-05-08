#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>

class BankAccount
{
private:
    std::string accountHolder;
    int balance;
    
public:
    // Constructors
    BankAccount( const char* holder, int initialBalance = 0 );

    // Accessors
    int getBalance() const;
    bool isOverdrawn() const;

    // Modifiers
    void deposit( int value );
    void withdraw( int value );
};
#endif /*BANKACCOUNT_H_*/
