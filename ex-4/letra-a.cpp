#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Menor valor representável por float: " << numeric_limits<float>::lowest() << endl;
    cout << "Maior valor representável por float: " << numeric_limits<float>::max() << endl;

    return 0;
}
