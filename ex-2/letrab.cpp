#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - Decimal: " << static_cast<int>(c)
                  << ", Octal: " << oct << static_cast<int>(c)
                  << ", Hexadecimal: " << hex << static_cast<int>(c) << std::dec << std::endl;
    }

    return 0;
}
