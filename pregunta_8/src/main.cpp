#include "cuentaAhorros.h"
#include <iostream>
using namespace std;

int main (){
    
    CuentaAhorros cuenta1 {};

    cuenta1.Depositar(1000);
    cuenta1.Retirar(500);
    cuenta1.Depositar(1000);
    cuenta1.Depositar(1200);

    cout << "En cuenta1 hay: " << cuenta1.ObtenerSaldo() << endl;

    CuentaAhorros cuenta2 {};

    cuenta2.Depositar(500);
    cuenta2.Retirar(1000);
    cuenta2.Depositar(1200);
    cuenta2.Depositar(1000);

    cout << "En cuenta2 hay: " << cuenta2.ObtenerSaldo() << endl;

    return 0;
}