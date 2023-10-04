#include <iostream>

using namespace std;

int main() {
    unsigned long int uli = 18446744073709551615; 
    long int li;

    li = uli;

    uli = li;

    cout << "Valor de uli: " << uli << endl;
    cout << "Valor de li: " << li << endl;

    return 0;
}

/* Quando é atribuído o valor de uma variável unsigned long int (uli) a uma variável long int (li) e, 
em seguida, tenta atribuir o valor de li de volta a uli, pode ocorrer um problema relacionado ao estouro (overflow) 
de valores negativos. Isso ocorre porque o tipo unsigned long int não permite representar valores negativos, enquanto o tipo long int permite.

No código acima, o valor de uli é inicialmente o maior valor representável por um uli. Quando é atribuido esse valor a li, ele se torna -1, que
é o menor valor representável por um long int. No entanto, quando tentamos atribuir o valor de li de volta a uli, ocorre um problema. O valor -1
não pode ser representado como unsigned long int, pois não permite valores negativos. Portanto, uli permanece com o valor máximo possível, 
18446744073709551615.*/