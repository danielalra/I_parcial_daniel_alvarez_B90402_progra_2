#ifndef LISTAINFINITA_H
#define LISTAINFINITA_H

#include <iostream>

class ListaInfinita {

    struct Nodo{
        int valor;
        Nodo *siguiente;
    };
    Nodo *primero;

    public:

    ListaInfinita(); // Constructor
    ~ListaInfinita(); // Destructor
    
    void AgregarElementoAlFinal(int valor); //metodo para agregar un nodo a la lista

    friend std::ostream& operator << (std::ostream &o, const ListaInfinita &lista); //operador para imprimir la lista

};


#endif