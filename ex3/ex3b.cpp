#include <iostream>
#include <limits>

using namespace std;

int main() {
   
    unsigned long int menor_valor = numeric_limits<unsigned long int>::min();
    unsigned long int maior_valor = numeric_limits<unsigned long int>::max();

    cout << "O menor valor representável por um unsigned long int é: " << menor_valor << endl;
    cout << "O maior valor representável por um unsigned long int é: " << maior_valor << endl;

    return 0;
}