#include <iostream>
#include <limits>

using namespace std;

int main() {
    long int li = numeric_limits<long int>::max();

    cout << "Maior valor representável por long int: " << li << endl;

    return 0;
}
