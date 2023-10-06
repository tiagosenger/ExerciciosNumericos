#include <iostream>

using namespace std;

int main() {
    int intValue = 42;
    float floatValue = 3.14f;
    double doubleValue = 2.71828;
    char charValue = 'A';

    cout << "Valores originais:" << endl;
    cout << "int: " << intValue << ", bool: " << (intValue ? "true" : "false") << endl;
    cout << "float: " << floatValue << ", bool: " << (floatValue ? "true" : "false") << endl;
    cout << "double: " << doubleValue << ", bool: " << (doubleValue ? "true" : "false") << endl;
    cout << "char: '" << charValue << "', bool: " << (charValue ? "true" : "false") << endl;

    // Modificando valores
    intValue = 0;
    floatValue = 0.0f;
    doubleValue = 0.0;
    charValue = '\0';

    cout << "\nValores modificados:" << endl;
    cout << "int: " << intValue << ", bool: " << (intValue ? "true" : "false") << endl;
    cout << "float: " << floatValue << ", bool: " << (floatValue ? "true" : "false") << endl;
    cout << "double: " << doubleValue << ", bool: " << (doubleValue ? "true" : "false") << endl;
    cout << "char: '" << charValue << "', bool: " << (charValue ? "true" : "false") << endl;

    return 0;
}
