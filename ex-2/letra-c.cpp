#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char inputChar;

    cout << "Digite um caractere: ";
    cin >> inputChar;

    cout << "'" << inputChar << "' - Decimal: " << static_cast<int>(inputChar)
              << ", Octal: " << oct << static_cast<int>(inputChar)
              << ", Hexadecimal: " << hex << static_cast<int>(inputChar) << std::dec << std::endl;

    return 0;
}
