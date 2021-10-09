#include "cuentaAhorros.h"

void CuentaAhorros::Depositar(float deposito){
    this->movimientos.push_back(deposito);
}

void CuentaAhorros::Retirar(float retiro){
    //hacer negativo
    retiro -= 0;
    this->movimientos.push_back(retiro);
}

float CuentaAhorros::ObtenerSaldo(){

    float total=0;

    for (float monto : this->movimientos){
        total += monto;
    }
    return total;
}