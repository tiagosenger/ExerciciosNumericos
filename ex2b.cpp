#include <iostream>

using namespace std;

int main() {

    for (char c = '0'; c <= '9'; c++) {
        cout << "'" << c << "' - " << static_cast<int>(c) << " (em decimal) ";
        cout << oct << static_cast<int>(c) << " (em octal) ";
        cout << hex << static_cast<int>(c) << " (em hexadecimal)" << endl;
        cout << dec;
    }

    return 0;
}