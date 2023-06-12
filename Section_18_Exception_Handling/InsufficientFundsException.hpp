#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H_
#define __INSUFFICIENT_FUNDS_EXCEPTION_H_

using namespace std;

class InsufficientFundsException : public exception {
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept {
        return "Insufficient funds exception";
    }
};

#endif 
