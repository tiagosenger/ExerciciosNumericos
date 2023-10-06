#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned int ui = numeric_limits<unsigned int>::max();

    cout << "Maior valor representável por unsigned int: " << ui << endl;

    return 0;
}
