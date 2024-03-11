#include "ArticoloAlimentare.h"

ArticoloAlimentare::ArticoloAlimentare(int codiceBarre, float prezzoUnitario, int annoScadenza)
    : Articolo(codiceBarre, prezzoUnitario) {
    this->annoScadenza = annoScadenza;
}

void ArticoloAlimentare::sconta() {
    if (annoScadenza == 2024)
        setPrezzoUnitario(getPrezzoUnitario() - 7);
}
