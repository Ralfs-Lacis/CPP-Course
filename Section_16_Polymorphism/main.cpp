#include <iostream>
#include <memory>
#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Trust_Account.hpp"
#include "Account_Util.hpp"

using namespace std;

int main() {
    
    Checking_Account c;
    cout << c << endl;
   
    Savings_Account s {"Test1", 1000000, 3};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;
    
    
    Account *ptr = new Trust_Account("Test2", 50000, 2.6);
    cout << *ptr << endl;
        

    Checking_Account frank {"Test3", 5000};
    cout << frank << endl;
    
    Account *trust = new Trust_Account("Test4");
    cout << *trust << endl;
    
    Account *p1 = new Checking_Account("Test5", 20000);
    Account *p2 = new Savings_Account("Test6", 5000);
    Account *p3 = new Trust_Account("Test7");
    
    vector<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 55000);
    withdraw(accounts, 5);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}

