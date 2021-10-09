#include "cuentaAhorros.h"

CuentaAhorros::CuentaAhorros(){

}

void CuentaAhorros::Depositar(float deposito){
    this->movimientos.push_back(deposito);
}

void CuentaAhorros::Retirar(float retiro){
    //hacer negativo
    float cero = 0;
    retiro = cero - retiro;
    this->movimientos.push_back(retiro);
}

float CuentaAhorros::ObtenerSaldo(){

    float total=0;

    for (float monto : this->movimientos){
        total += monto;
    }
    return total;
}