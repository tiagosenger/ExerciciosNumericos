#include <iostream>
#include <limits>

using namespace std;

int main() {
    long int li;

    li = numeric_limits<long int>::max();

    cout << "Maior valor representável por um long int: " << li << endl;

    return 0;
}
