#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const float pif = 3.14159265358979323846f;
    const double pid = 3.14159265358979323846;
    
    cout << "Comparação entre pif e pid com diferentes casas decimais:" << endl;

    cout << fixed << setprecision(2) << "Duas casas decimais - pif: " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(4) << "Quatro casas decimais - pif: " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(8) << "Oito casas decimais - pif: " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(16) << "Dezesseis casas decimais - pif: " << pif << ", pid: " << pid << endl;

    return 0;
}
