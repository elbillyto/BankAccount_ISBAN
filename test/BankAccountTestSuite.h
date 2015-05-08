#ifndef BANKACCOUNTTESTSUITE_H_
#define BANKACCOUNTTESTSUITE_H_

#include <cxxtest/TestSuite.h>

#include "BankAccount.hpp"

class BankAccountTestSuite: public CxxTest::TestSuite {
public:
	void testBankAccount() {
		// TODO: Implement testBankAccount() function.
		// An account initialized with a name only should start
		// empty.
		BankAccount emptyAccount("Empty Account");
		TS_ASSERT_EQUALS(emptyAccount.getBalance(), 0);

		// An account initialized with a balance should obviously
		// have that balance.
		BankAccount nonemptyAccount("Nonempty Account", 12345);
		TS_ASSERT_EQUALS(nonemptyAccount.getBalance(), 12345);		
	}

	void testGetBalance() {
		// TODO: Implement testGetBalance() function.
	}

	void testIsOverdrawn() {
		// TODO: Implement testIsOverdrawn() function.
	}

	void testDeposit() {
		// TODO: Implement testDeposit() function.
	}

	void testWithdraw() {
		// TODO: Implement testWithdraw() function.
	}
	void testInitialBalances() {
		// An account initialized with a name only should start
		// empty.
		BankAccount emptyAccount("Empty Account");
		TS_ASSERT_EQUALS(emptyAccount.getBalance(), 0);

		// An account initialized with a balance should obviously
		// have that balance.
		BankAccount nonemptyAccount("Nonempty Account", 12345);
		TS_ASSERT_EQUALS(nonemptyAccount.getBalance(), 12345);
	}
	void testDeposits() {
		// Start Joe out poor, with $0.00.
		BankAccount account("Joe Hokie");

		// Deposit $5.00 in his account.
		account.deposit(5);

		// Hopefully the bank is keeping track of his money properly.
		TS_ASSERT_EQUALS(account.getBalance(), 5);

		// Have Joe deposit a little more, and verify.
		account.deposit(100);
		TS_ASSERT_EQUALS(account.getBalance(), 105);
	}

	void testWithdrawals() {
		// Start Francois out moderately wealthy.
		BankAccount account("Francois Hokie", 5000);

		// Francois is a big spender, who makes several withdrawals.
		account.withdraw(100);
		account.withdraw(200);
		account.withdraw(300);
		account.withdraw(400);
		account.withdraw(500);

		// He should have $3500 left now.
		TS_ASSERT_EQUALS(account.getBalance(), 3500);
	}

	void testVariousActivity() {
		// Start Sabrina out with $75, and then monitor her
		// account over some deposits and withdrawals.
		BankAccount account("Sabrina Hokie", 75);

		account.deposit(50);
		TS_ASSERT_EQUALS(account.getBalance(), 125);

		account.withdraw(10);
		TS_ASSERT_EQUALS(account.getBalance(), 115);

		account.withdraw(42);
		TS_ASSERT_EQUALS(account.getBalance(), 73);

		account.deposit(534);
		TS_ASSERT_EQUALS(account.getBalance(), 607);
	}
	void testOverdrawn() {
		// Hiroyuki isn't very responsible with his money, so
		// he is going to withdraw more than he has available.
		BankAccount account("Hiroyuki Hokie", 115);
		account.withdraw(200);

		TS_ASSERT_LESS_THAN(account.getBalance(), 0);
		TS_ASSERT_EQUALS(account.getBalance(), -85);
		TS_ASSERT(account.isOverdrawn());

		// Later, a Wall Street financial expert takes Hiroyuki
		// under his wing and teaches him how to properly manage
		// his funds.  He makes a large deposit to get his life
		// back on track.
		account.deposit(1000);

		TS_ASSERT_LESS_THAN(0, account.getBalance());
		TS_ASSERT_EQUALS(account.getBalance(), 915);
		TS_ASSERT(!account.isOverdrawn());
	}
	  void testBadCase()
	    {
	        BankAccount account( "Bad Test Case", 5 );
	        account.deposit( 7 );

	        // To my knowledge, 5 + 7 != 13.
	        TS_ASSERT_EQUALS( account.getBalance(), 13 );
	    }

};

#endif /*BANKACCOUNTTESTSUITE_H_*/
