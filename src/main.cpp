//============================================================================
// Name        : isban.cpp
// Author      : manuel
// Version     :
// Copyright   : copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BankAccount.hpp"
using namespace std;

int main() {
    cout << "Hello World! from BankAccount_ISBAN.exe" << endl; // prints !!!message in a bottle!!!
    // Start Joe out poor, with $0.00.
    BankAccount account( "Joe Hokie" );

    cout << account.getBalance()<< " €" << endl; // 1
    // Deposit $5.00 in his account.
    account.deposit( 5 );

    // Have Joe deposit a little more, and verify.
    account.deposit( 100 );
    cout << account.getBalance()<< " € "<< endl; // 1

    return 0;
}
