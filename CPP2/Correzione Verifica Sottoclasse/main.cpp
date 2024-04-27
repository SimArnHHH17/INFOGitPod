#include <iostream>
#include "Articolo.h"
#include "ArticoloAlimentare.h"

int main() {
    // Creazione di 2 oggetti per la classe Articolo
    Articolo articolo1(12345, 10.0);
    Articolo articolo2;
    articolo2.setCodiceBarre(54321);
    articolo2.setPrezzoUnitario(15.0);

    // Chiamate agli altri metodi
    std::cout << "Codice a barre di articolo1: " << articolo1.getCodiceBarre() << std::endl;
    std::cout << "Prezzo unitario di articolo1: " << articolo1.getPrezzoUnitario() << std::endl;
    std::cout << "Codice a barre di articolo2: " << articolo2.getCodiceBarre() << std::endl;
    std::cout << "Prezzo unitario di articolo2: " << articolo2.getPrezzoUnitario() << std::endl;

    // Creazione di 1 oggetto per la classe derivata e chiamata al metodo sconta()
    ArticoloAlimentare articoloAlimentare(98765, 20.0, 2024);
    articoloAlimentare.sconta();

    std::cout << "Prezzo unitario di articoloAlimentare dopo lo sconto: " << articoloAlimentare.getPrezzoUnitario() << std::endl;

    return 0;
}
