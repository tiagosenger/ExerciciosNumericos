#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string caracteres_especiais = "çã";

    cout << "Caracteres especiais: " << caracteres_especiais << endl;
    for (char c : caracteres_especiais) {
        cout << "'" << c << "' - " << static_cast<int>(c) << " (em decimal) ";
        cout << oct << static_cast<int>(c) << " (em octal) ";
        cout << hex << static_cast<int>(c) << " (em hexadecimal)" << endl;
        cout << dec;
    }
    return 0;
}