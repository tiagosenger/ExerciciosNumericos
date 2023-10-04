#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    float numero = 3.14159265358979323846;

    cout << setprecision(2) << "Com 2 casas decimais: " << numero << endl;

    cout << setprecision(4) << "Com 4 casas decimais: " << numero << endl;

    cout << setprecision(8) << "Com 8 casas decimais: " << numero << endl;

    cout << setprecision(16) << "Com 16 casas decimais: " << numero << endl;

    return 0;
}
