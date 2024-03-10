#ifndef PILA_H
#define PILA_H

class PILA
{
private:
    int *vet; // puntatore a 1 elemento pila
    int size; // dimensione array
    int fine; // indice a 1 elemento libero

public:
    PILA();
    PILA(int);
    ~PILA(); // Distruttore per deallocare la memoria
    bool isEmpty();
    bool isFull();
    bool push(int);
    bool pop(int &);
    void stampa();
};

#endif