#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ifstream in_file {"romeoandjuliet.txt"};
    ofstream out_file {"romeoandjuliet_out.txt"};
    if (!in_file.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
     if (!out_file.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    
    string line{};
    int line_number {0};
    while (getline(in_file, line)) {
        if (line == "")
            out_file << endl;
        else {
            ++line_number;
            out_file << setw(7) << left << line_number
                     << line << endl;
        }
    }
    cout << "\nCopy complete" << endl;
    in_file.close();
    out_file.close();
    return 0;
}

