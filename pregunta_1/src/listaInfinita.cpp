
#include "listaInfinita.h"
using namespace std;
#include <iostream>

ListaInfinita::ListaInfinita() {
    
    this->primero = nullptr;
}


ListaInfinita::~ListaInfinita() {

    if (this->primero == nullptr)
    {
        return;
    }

    ListaInfinita::Nodo* nodoActual = this->primero;

    while (nodoActual != this->primero)
    {
        ListaInfinita::Nodo* nodoSiguiente = nodoActual->siguiente;
        delete nodoActual;
        nodoActual = nodoSiguiente;
    }
}

void ListaInfinita::AgregarElementoAlFinal(int valor) {
    
    // Inicializar nuevo nodo y apunta a primero de una vez
    ListaInfinita::Nodo *nuevoNodo = new ListaInfinita::Nodo();
    nuevoNodo->valor = valor;
    nuevoNodo->siguiente = this->primero;


    // Si no existe ningún nodo, lo establece como el primer nodo
    if (this->primero == nullptr)
    {    
        this->primero = nuevoNodo;
        this->primero->siguiente = this->primero;
        return;
    }
    // Iterar sobre los nodos hasta llegar al último
    ListaInfinita::Nodo *iterador = this->primero;

    // Iterar hasta el final de la lista (siguiente es el primero)
    while (iterador->siguiente != this->primero)
    {
        iterador = iterador->siguiente;
    }

    // Conectar el nodo al final de la lista
    iterador->siguiente = nuevoNodo;
    

}

std::ostream& operator << (std::ostream &o, const ListaInfinita &lista)
{
    ListaInfinita::Nodo* iterador = lista.primero;
    ListaInfinita::Nodo* primero = lista.primero;
    o << iterador->valor << ",";
        iterador=iterador->siguiente;

    while(iterador != primero){
        o << " " << iterador->valor << ",";
        iterador=iterador->siguiente;
    }

    o << "..." << endl;
    
    return o;
}

