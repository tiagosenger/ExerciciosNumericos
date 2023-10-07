#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    char inputChar;

    cout << "Digite um caractere: ";
    cin >> inputChar;

    cout << "'" << inputChar << "' - Decimal: " << static_cast<int>(inputChar)
         << ", Octal: " << oct << static_cast<int>(inputChar)
         << ", Hexadecimal: " << hex << static_cast<int>(inputChar) << dec << endl;

    char specialChar1 = 'ç';
    char specialChar2 = 'ã';

    cout << "'" << specialChar1 << "' - Decimal: " << static_cast<int>(specialChar1)
         << ", Octal: " << oct << static_cast<int>(specialChar1)
         << ", Hexadecimal: " << hex << static_cast<int>(specialChar1) << dec << endl;

    cout << "'" << specialChar2 << "' - Decimal: " << static_cast<int>(specialChar2)
         << ", Octal: " << oct << static_cast<int>(specialChar2)
         << ", Hexadecimal: " << hex << static_cast<int>(specialChar2) << dec << endl;

    return 0;
}
