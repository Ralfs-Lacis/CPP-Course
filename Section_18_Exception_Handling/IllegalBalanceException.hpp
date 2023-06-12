#ifndef __ILLEGAL_BALANCE_EXCEPTION_HPP_
#define __ILLEGAL_BALANCE_EXCEPTION_HPP_

using namespace std;

class IllegalBalanceException: public exception 
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept {
        return "Illegal balance exception";
    }
};

#endif 
