#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num_double = 0.1;
    long double num_long_double = 0.1;

    cout << "Valor de num_double: " << setprecision(20) << num_double << endl;
    cout << "Valor de num_long_double: " << setprecision(20) << num_long_double << endl;

    return 0;
}
