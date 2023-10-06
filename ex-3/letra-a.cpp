#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Menor valor representável por int: " << numeric_limits<int>::min() << endl;
    cout << "Maior valor representável por int: " << numeric_limits<int>::max() << endl;

    return 0;
}
