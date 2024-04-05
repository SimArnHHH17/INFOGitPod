#ifndef ARTICOLO_H
#define ARTICOLO_H

class Articolo {
private:
    int codiceBarre;
    float prezzoUnitario;

public:
    // Metodi costruttori
    Articolo();
    Articolo(int codiceBarre, float prezzoUnitario);

    // Metodi get e set
    int getCodiceBarre() const;
    void setCodiceBarre(int codiceBarre);
    float getPrezzoUnitario() const;
    void setPrezzoUnitario(float prezzoUnitario);

    // Metodo sconta
    void sconta();
};

#endif // ARTICOLO_H
