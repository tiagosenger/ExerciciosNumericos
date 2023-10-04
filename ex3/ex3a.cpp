#include <iostream>
#include <limits>

using namespace std;

int main() {

    int menor_valor = numeric_limits<int>::min();
    int maior_valor = numeric_limits<int>::max();

    cout << "O menor valor representável por um int é: " << menor_valor << endl;
    cout << "O maior valor representável por um int é: " << maior_valor << endl;

    return 0;
}