#ifndef UNIT_TEST

#include <iostream>
#include "calculadoraCosto.h"

int main() {

    CalculadoraCosto calculadora {2};

    float costoFinal = calculadora.CalcularCosto(5);
    std::cout << costoFinal;

    return 0;
}

#endif