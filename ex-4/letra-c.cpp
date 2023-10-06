#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float pif = 3.14159265358979323846f;

    cout << "Casas decimais formatadas:" << endl;

    cout << fixed << setprecision(2) << "Duas casas decimais: " << pif << endl;
    cout << fixed << setprecision(4) << "Quatro casas decimais: " << pif << endl;
    cout << fixed << setprecision(8) << "Oito casas decimais: " << pif << endl;
    cout << fixed << setprecision(16) << "Dezesseis casas decimais: " << pif << endl;

    return 0;
}
