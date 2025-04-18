//write a c++ program print a multiplication table of any number.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "ASCII Table (0 - 255)\n";
    cout << "----------------------\n";
    cout << left << setw(10) << "Value" << "Character\n";
    cout << "----------------------\n";

    for (int i = 0; i <= 255; ++i) {
        cout << left << setw(10) << i;

        if (i >= 32 && i <= 126) {
            cout << static_cast<char>(i) << endl;
        } else {
            cout << "." << endl; 
        }
    }

    return 0;
}
