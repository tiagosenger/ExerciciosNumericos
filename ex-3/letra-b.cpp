#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned long int uli = numeric_limits<unsigned long int>::max();

    cout << "Maior valor representável por unsigned long int: " << uli << endl;

    return 0;
}
