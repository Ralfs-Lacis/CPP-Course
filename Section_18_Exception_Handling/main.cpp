#include <iostream>
#include <memory>
#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Trust_Account.hpp"
#include "Account_Util.hpp"

using namespace std;

int main() {
    unique_ptr<Account> moes_account;
    unique_ptr<Account> larrys_account;
    try {
        larrys_account = make_unique<Savings_Account>("Test1", -2000.0);
        cout << *larrys_account << endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << ex.what() << endl;
    }

    try {
        moes_account = make_unique<Savings_Account>("Test2", 1000.0);
        cout << *moes_account << endl;
        moes_account->withdraw(500.0);
        cout << *moes_account << endl;
        moes_account->withdraw(1000.0);
        cout << *moes_account << endl;
        
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << ex.what() << endl;
    }
    catch (const InsufficientFundsException &ex) {
        cerr << ex.what() << endl;
    }
    cout << "Program completed successfully" << endl;
    return 0;
}

