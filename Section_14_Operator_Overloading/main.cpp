#include <iostream>
#include "MyString.hpp"
#include <cassert>
#include <cctype>

using std::cout;
using std::boolalpha;
using std::endl;

int main() {


    cout << boolalpha << endl;
    MyString a{ "frank" };
    MyString b{ "frank" };

    assert((a == b) == true);
    assert((a != b) == false);
    cout << (a == b) << endl;         // true
    cout << (a != b) << endl;          // false


    b = "george";
    assert(!(a == b));
    assert(a != b);
    assert(a < b);
    assert(!(a > b));

    cout << (a == b) << endl;         // false
    cout << (a != b) << endl;          // true
    cout << (a < b) << endl;          // true
    cout << (a > b) << endl;           // false

    MyString s1{ "FRANK" };
    s1 = -s1;
    cout << s1 << endl;               // frank              

    s1 = s1 + "*****";
    cout << s1 << endl;               // frank*****       

    s1 += "-----";                        // frank*****-----
    cout << s1 << endl;

    cout << "================================================================\n";
    MyString s2{ "12345" };
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345

    MyString s3{ "abcdef" };
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    cout << "================================================================\n";

    MyString s = "Frank";
    ++s;
    cout << s << endl;                  // FRANK

    s = -s;
    cout << s << endl;                  // frank
    cout << "================================================================\n";

    MyString result;
    result = ++s;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // FRANK
    cout << "================================================================\n";

    s = "Frank";
    s++;
    cout << s << endl;                  // FRANK

    s = -s;
    cout << s << endl;                  // frank
    result = s++;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // frank
    cout << "================================================================\n";

    return 0;
}