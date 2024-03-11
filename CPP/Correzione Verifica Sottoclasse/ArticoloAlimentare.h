#ifndef ARTICOLOALIMENTARE_H
#define ARTICOLOALIMENTARE_H

#include "Articolo.h"

class ArticoloAlimentare : public Articolo {
private:
    int annoScadenza;

public:
    // Costruttore
    ArticoloAlimentare(int codiceBarre, float prezzoUnitario, int annoScadenza);

    // Metodo sconta
    void sconta();
};

#endif // ARTICOLOALIMENTARE_H
