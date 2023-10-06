#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned long int uli = numeric_limits<unsigned long int>::max();

    cout << "Valor inicial de uli: " << uli << endl;

    long int li = static_cast<long int>(uli);
    cout << "Valor de li após a conversão: " << li << endl;

    uli = static_cast<unsigned long int>(li);

    cout << "Valor final de uli após atribuição de li: " << uli << endl;

    return 0;
}
