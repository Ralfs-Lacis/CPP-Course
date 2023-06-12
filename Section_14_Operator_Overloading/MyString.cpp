#include <iostream>
#include <cstring>
#include <string.h>
#include "MyString.hpp"

using namespace std;
// No-args constructor
MyString::MyString()
    : str{ nullptr } {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
/*MyString::MyString(const char* s)
    : str{ nullptr } {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}*/

// Copy constructor
/*MyString::MyString(const MyString& source)
    : str{ nullptr } {
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    //       std::cout << "Copy constructor used" << std::endl;

}*/

// Move constructor
MyString::MyString(MyString&& source)
    :str(source.str) {
    source.str = nullptr;
    //        std::cout << "Move constructor used" << std::endl;
}

// Destructor
MyString::~MyString() {
    delete[] str;
}

// Copy assignment
/*MyString& MyString::operator=(const MyString& rhs) {
    //    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}*/

// Move assignment
MyString& MyString::operator=(MyString&& rhs) {
    //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int MyString::get_length() const { return strlen(str); }
const char* MyString::get_str() const { return str; }

// overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const MyString& rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream& operator>>(std::istream& in, MyString& rhs) {
    char* buff = new char[1000];
    in >> buff;
    rhs = MyString{ buff };
    delete[] buff;
    return in;
}

// Equality
bool operator==(const MyString& lhs, const MyString& rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Not equals
bool operator!=(const MyString& lhs, const MyString& rhs) {
    return !(std::strcmp(lhs.str, rhs.str) == 0);
}

// Less than
bool operator<(const MyString& lhs, const MyString& rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

// Greater than
bool operator>(const MyString& lhs, const MyString& rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
}

// Make lowercase
/*MyString operator-(const MyString& obj) {
    char* buff = new char[strnlen(obj.str) + 1];
    strncpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    MyString temp{ buff };
    delete[] buff;
    return temp;
}*/

// Concatenation
/*MyString operator+(const MyString& lhs, const MyString& rhs) {
    char* buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp{ buff };
    delete[] buff;
    return temp;
}*/

// concat and assign
MyString& operator+=(MyString& lhs, const MyString& rhs) {
    lhs = lhs + rhs;
    return lhs;
}

// Repeat
MyString operator*(const MyString& lhs, int n) {
    MyString temp;
    for (int i = 1; i <= n; i++)
        temp = temp + lhs;
    return temp;
}

// Repeat and assign
MyString& operator*=(MyString& lhs, int n) {
    lhs = lhs * n;
    return lhs;
}

// Make uppercase - pre increment
MyString& operator++(MyString& obj) {
    for (size_t i = 0; i < std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

// Make uppercase - post-increment
MyString operator++(MyString& obj, int) {
    MyString temp{ obj };
    ++obj;      // make sure you call the pre-increment!
    return temp;
}
