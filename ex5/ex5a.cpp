#include <iostream>

using namespace std;

int main() {
    int num1 = 42;
    int num2 = 0;
    double pi = 3.14159265358979323846;
    double zero = 0.0;
    char character = 'A';
    bool boolean = true;
    bool falseBoolean = false;

    cout << "int num1 is " << (num1 ? "true" : "false") << endl;
    cout << "int num2 is " << (num2 ? "true" : "false") << endl;
    cout << "double pi is " << (pi ? "true" : "false") << endl;
    cout << "double zero is " << (zero ? "true" : "false") << endl;
    cout << "char character is " << (character ? "true" : "false") << endl;
    cout << "bool boolean is " << (boolean ? "true" : "false") << endl;
    cout << "bool falseBoolean is " << (falseBoolean ? "true" : "false") << endl;

    return 0;
}
