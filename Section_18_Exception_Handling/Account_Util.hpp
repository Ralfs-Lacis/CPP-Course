#ifndef _ACCOUNT_UTIL_HPP_
#define _ACCOUNT_UTIL_HPP_
#include <vector>
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"

// Utility helper functions for Account class

void display(const vector<Account> &accounts);
void deposit(vector<Account> &accounts, double amount);
void withdraw(vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class

void display(const vector<Savings_Account> &accounts);
void deposit(vector<Savings_Account> &accounts, double amount);
void withdraw(vector<Savings_Account> &accounts, double amount);

// Utility helper functions for Checking Account class
void display(const vector<Checking_Account> &accounts);
void deposit(vector<Checking_Account> &accounts, double amount);
void withdraw(vector<Checking_Account> &accounts, double amount);

// Utility helper functions for Trust Account class
void display(const vector<Trust_Account> &accounts);
void deposit(vector<Trust_Account> &accounts, double amount);
void withdraw(vector<Trust_Account> &accounts, double amount);

#endif