#include <iostream>
#include <limits>

using namespace std;

int main() {
    long int li = numeric_limits<long int>::max();

    cout << "Valor inicial de li: " << li << endl;

    unsigned int ui = static_cast<unsigned int>(li);
    cout << "Valor de ui após a atribuição de li: " << ui << endl;

    li = static_cast<long int>(ui);

    cout << "Valor final de li após atribuição de ui: " << li << endl;

    return 0;
}
