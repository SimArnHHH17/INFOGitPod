#include "Articolo.h"

Articolo::Articolo() {
    codiceBarre = 0;
    prezzoUnitario = 0.0;
}

Articolo::Articolo(int codiceBarre, float prezzoUnitario) {
    this->codiceBarre = codiceBarre;
    this->prezzoUnitario = prezzoUnitario;
}

int Articolo::getCodiceBarre() const {
    return codiceBarre;
}

void Articolo::setCodiceBarre(int codiceBarre) {
    this->codiceBarre = codiceBarre;
}

float Articolo::getPrezzoUnitario() const {
    return prezzoUnitario;
}

void Articolo::setPrezzoUnitario(float prezzoUnitario) {
    this->prezzoUnitario = prezzoUnitario;
}

void Articolo::sconta() {
    prezzoUnitario -= 5;
}
