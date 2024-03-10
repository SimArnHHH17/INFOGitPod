#include "Pila.h"
#include <iostream>

PILA::PILA() {
    size = 10; // dimensione predefinita
    vet = new int[size];
    fine = 0;
}

PILA::PILA(int s) {
    size = s;
    vet = new int[size];
    fine = 0;
}

PILA::~PILA() {
    delete[] vet;
}

bool PILA::isEmpty() {
    return fine == 0;
}

bool PILA::isFull() {
    return fine == size;
}

bool PILA::push(int elemento) {
    if (isFull()) {
        std::cout << "Errore: la pila è piena.\n";
        return false;
    }
    vet[fine++] = elemento;
    return true;
}

bool PILA::pop(int &elemento) {
    if (isEmpty()) {
        std::cout << "Errore: la pila è vuota.\n";
        return false;
    }
    elemento = vet[--fine];
    return true;
}

void PILA::stampa() {
    std::cout << "Contenuto della pila:\n";
    for (int i = fine - 1; i >= 0; --i) {
        std::cout << vet[i] << "\n";
    }
}