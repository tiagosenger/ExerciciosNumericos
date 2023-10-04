#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    float pif = 3.14159265358979323846;
    double pid = 3.14159265358979323846;

    cout << setprecision(2) << "pif (2 casas decimais): " << pif << endl;
    cout << setprecision(2) << "pid (2 casas decimais): " << pid << endl;

    cout << setprecision(4) << "pif (4 casas decimais): " << pif << endl;
    cout << setprecision(4) << "pid (4 casas decimais): " << pid << endl;

    cout << setprecision(8) << "pif (8 casas decimais): " << pif << endl;
    cout << setprecision(8) << "pid (8 casas decimais): " << pid << endl;

    cout << setprecision(16) << "pif (16 casas decimais): " << pif << endl;
    cout << setprecision(16) << "pid (16 casas decimais): " << pid << endl;

    return 0;
}
