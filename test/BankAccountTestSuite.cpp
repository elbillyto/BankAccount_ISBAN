/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_BankAccountTestSuite_init = false;
#include "C:\Users\xIS07362\git\BankAccount_ISBAN\test\BankAccountTestSuite.h"

static BankAccountTestSuite suite_BankAccountTestSuite;

static CxxTest::List Tests_BankAccountTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BankAccountTestSuite( "test/BankAccountTestSuite.h", 8, "BankAccountTestSuite", suite_BankAccountTestSuite, Tests_BankAccountTestSuite );

static class TestDescription_suite_BankAccountTestSuite_testBankAccount : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testBankAccount() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 10, "testBankAccount" ) {}
 void runTest() { suite_BankAccountTestSuite.testBankAccount(); }
} testDescription_suite_BankAccountTestSuite_testBankAccount;

static class TestDescription_suite_BankAccountTestSuite_testGetBalance : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testGetBalance() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 23, "testGetBalance" ) {}
 void runTest() { suite_BankAccountTestSuite.testGetBalance(); }
} testDescription_suite_BankAccountTestSuite_testGetBalance;

static class TestDescription_suite_BankAccountTestSuite_testIsOverdrawn : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testIsOverdrawn() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 27, "testIsOverdrawn" ) {}
 void runTest() { suite_BankAccountTestSuite.testIsOverdrawn(); }
} testDescription_suite_BankAccountTestSuite_testIsOverdrawn;

static class TestDescription_suite_BankAccountTestSuite_testDeposit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testDeposit() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 31, "testDeposit" ) {}
 void runTest() { suite_BankAccountTestSuite.testDeposit(); }
} testDescription_suite_BankAccountTestSuite_testDeposit;

static class TestDescription_suite_BankAccountTestSuite_testWithdraw : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testWithdraw() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 35, "testWithdraw" ) {}
 void runTest() { suite_BankAccountTestSuite.testWithdraw(); }
} testDescription_suite_BankAccountTestSuite_testWithdraw;

static class TestDescription_suite_BankAccountTestSuite_testInitialBalances : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testInitialBalances() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 38, "testInitialBalances" ) {}
 void runTest() { suite_BankAccountTestSuite.testInitialBalances(); }
} testDescription_suite_BankAccountTestSuite_testInitialBalances;

static class TestDescription_suite_BankAccountTestSuite_testDeposits : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testDeposits() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 49, "testDeposits" ) {}
 void runTest() { suite_BankAccountTestSuite.testDeposits(); }
} testDescription_suite_BankAccountTestSuite_testDeposits;

static class TestDescription_suite_BankAccountTestSuite_testWithdrawals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testWithdrawals() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 64, "testWithdrawals" ) {}
 void runTest() { suite_BankAccountTestSuite.testWithdrawals(); }
} testDescription_suite_BankAccountTestSuite_testWithdrawals;

static class TestDescription_suite_BankAccountTestSuite_testVariousActivity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testVariousActivity() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 79, "testVariousActivity" ) {}
 void runTest() { suite_BankAccountTestSuite.testVariousActivity(); }
} testDescription_suite_BankAccountTestSuite_testVariousActivity;

static class TestDescription_suite_BankAccountTestSuite_testOverdrawn : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testOverdrawn() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 96, "testOverdrawn" ) {}
 void runTest() { suite_BankAccountTestSuite.testOverdrawn(); }
} testDescription_suite_BankAccountTestSuite_testOverdrawn;

static class TestDescription_suite_BankAccountTestSuite_testBadCase : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAccountTestSuite_testBadCase() : CxxTest::RealTestDescription( Tests_BankAccountTestSuite, suiteDescription_BankAccountTestSuite, 116, "testBadCase" ) {}
 void runTest() { suite_BankAccountTestSuite.testBadCase(); }
} testDescription_suite_BankAccountTestSuite_testBadCase;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
