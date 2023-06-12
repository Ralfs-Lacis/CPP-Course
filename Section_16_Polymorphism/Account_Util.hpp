#ifndef _ACCOUNT_UTIL_HPP_
#define _ACCOUNT_UTIL_HPP_
#include <vector>
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"

using namespace std;


// Utility helper functions for Account* class

void display(const vector<Account*> &accounts);
void deposit(vector<Account*> &accounts, double amount);
void withdraw(vector<Account*> &accounts, double amount);



#endif // _ACCOUNT_UTIL_HPP_