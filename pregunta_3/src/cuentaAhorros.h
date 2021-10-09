#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H

#include <vector>

class CuentaAhorros {

    std::vector <float> movimientos;

    public:
    CuentaAhorros();
    ~CuentaAhorros() {}

    void Depositar(float);
    void Retirar(float);
    float ObtenerSaldo();

};

#endif