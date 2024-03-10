#include <iostream>
#include "Pila.h"

int main() {
    PILA p(5); // Creo una pila di dimensione 5

    // Popolo la pila
    for (int i = 1; i <= 5; ++i) {
        p.push(i);
    }

    // Stampo la pila
    p.stampa();

    // Eseguo delle operazioni di pop
    int popped;
    p.pop(popped);
    std::cout << "Elemento rimosso: " << popped << "\n";

    p.pop(popped);
    std::cout << "Elemento rimosso: " << popped << "\n";

    // Stampo la pila dopo le operazioni di pop
    p.stampa();

    return 0;
}