#include <iostream>
#include "I_Printable.hpp"

using namespace std;

ostream &operator<<(ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}

