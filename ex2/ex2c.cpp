#include <iostream>

using namespace std;

int main() {
    char caractere;

    cout << "Digite um caractere: ";
    cin >> caractere;

    cout << "'" << caractere << "' - " << static_cast<int>(caractere) << " (em decimal) ";
    cout << oct << static_cast<int>(caractere) << " (em octal) ";
    cout << hex << static_cast<int>(caractere) << " (em hexadecimal)" << endl;
    cout << dec;

    return 0;
}