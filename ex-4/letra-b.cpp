#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float pif = 3.14159265358979323846f;

    cout << "Valor de pif (pi com várias casas decimais): " << setprecision(15) << pif << endl;

    return 0;
}
