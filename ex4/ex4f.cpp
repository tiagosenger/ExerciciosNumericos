#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    double pid = 3.14159265358979323846;
    long double pild = 3.14159265358979323846;

    cout << setprecision(2) << "pid (double, 2 casas decimais): " << pid << endl;
    cout << setprecision(2) << "pild (long double, 2 casas decimais): " << pild << endl;

    cout << setprecision(4) << "pid (double, 4 casas decimais): " << pid << endl;
    cout << setprecision(4) << "pild (long double, 4 casas decimais): " << pild << endl;

    cout << setprecision(8) << "pid (double, 8 casas decimais): " << pid << endl;
    cout << setprecision(8) << "pild (long double, 8 casas decimais): " << pild << endl;

    cout << setprecision(16) << "pid (double, 16 casas decimais): " << pid << endl;
    cout << setprecision(16) << "pild (long double, 16 casas decimais): " << pild << endl;

    return 0;
}

/* O tipo long double é um tipo de ponto flutuante que geralmente oferece maior precisão em comparação com o tipo double. 
entretanto, no sistema desenvolvido, é possível observar que na amostragem de até 16 casas decimais não houveram diferentes arredondamentos*/