#include <iostream>

using namespace std;

int main() {
    long int li = -1;
    unsigned int ui;

    ui = li;
    li = ui;

    cout << "Valor de ui: " << ui << endl;
    cout << "Valor de li: " << li << endl;

    return 0;
}

/* Quando é atribuído o valor de uma variável long int (li) a uma variável unsigned int (ui) e, em seguida, tenta atribuir o valor de ui de volta 
a li, pode ocorrer um problema relacionado à perda de informação (truncamento). Isso ocorre porque o tipo unsigned int não permite representar valores
negativos, enquanto o tipo long int permite. Quando você move um valor negativo de li para ui, ocorre a perda do sinal negativo e o valor se torna positivo.

No código acima,  li é inicialmente definido como -1, um valor negativo. Quando atribuímos esse valor a ui, o sinal negativo é perdido e ui se torna o valor
máximo representável para um unsigned int. No entanto, quando tentamos atribuir o valor de ui de volta a li, ocorre a perda de informação. O valor de ui é 
maior do que o intervalo permitido para li, e como resultado, li também se torna o valor máximo representável para um long int.*/