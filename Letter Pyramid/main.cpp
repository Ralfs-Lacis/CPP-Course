#include <iostream>
#include <string>

using namespace std;

int main()
{
    string letters{};

    cout << "Enter a string of characters to create a Letter Pyramid : ";
    getline(cin, letters);

    size_t num_letters = letters.length();

    int position{ 0 };

    for (char x : letters) {

        size_t num_spaces = num_letters - position - 1;
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces;
        }

        for (size_t i = 0; i < position; i++) {
            cout << letters.at(i);
        }

        cout << x;

        for (int i = position - 1; i >= 0; --i) {
            
            auto y = static_cast<size_t>(i);
            cout << letters.at(y);
        }

        cout << endl;
        ++position;
    }

    return 0;
}