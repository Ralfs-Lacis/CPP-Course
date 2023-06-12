#ifndef _MYSTRING_HPP_INCLUDED
#define _MYSTRING_HPP_INCLUDED
#include <iostream>
using namespace std;

class MyString
{
    friend MyString operator-(const MyString& obj);                                        // make lowercase
    friend MyString operator+(const MyString& lhs, const MyString& rhs);       // concatenate
    friend bool operator==(const MyString& lhs, const MyString& rhs);           // equals
    friend bool operator!=(const MyString& lhs, const MyString& rhs);           // not equals
    friend bool operator<(const MyString& lhs, const MyString& rhs);            // less than
    friend bool operator>(const MyString& lhs, const MyString& rhs);            // greater than
    friend MyString& operator+=(MyString& lhs, const MyString& rhs);          // s1 += s2;  concat and assign
    friend MyString operator*(const MyString& lhs, int n);                               // s1 = s2 * 3;  repeat s2 n times
    friend MyString& operator*=(MyString& lhs, int n);                                   // s1 *= 3;   s1 = s1 * 3;    
    friend MyString& operator++(MyString& obj);                                           // ++s1; pre-increment make uppercase
    friend MyString operator++(MyString& obj, int);                                        // s++; post-increment make uppercase
    friend std::ostream& operator<<(std::ostream& os, const MyString& rhs);
    friend std::istream& operator>>(std::istream& in, MyString& rhs);

private:
    char* str;      // pointer to a char[] that holds a C-style string
public:
    MyString();                                                        // No-args constructor
    MyString(const char* s);                                     // Overloaded constructor
    MyString(const MyString& source);                    // Copy constructor
    MyString(MyString&& source);                         // Move constructor
    ~MyString();                                                      // Destructor

    MyString& operator=(const MyString& rhs);     // Copy assignment
    MyString& operator=(MyString&& rhs);           // Move assignment

    void display() const;

    int get_length() const;                                      // getters
    const char* get_str() const;
};

#endif // _MYSTRING_HPP_INCLUDED