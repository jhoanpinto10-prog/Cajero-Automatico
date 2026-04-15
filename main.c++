#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Aca van las variables
    double saldo = 1000.00; // ese saldo es como un ejemplo
    int opcion;
    double retiro, deposito;

    

    cout << "--- BIENVENIDO AL CAJERO AUTOMATICO ---" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "4. Salir" << endl;
    cout << "\nSeleccione una opcion: ";
    cin >> opcion;

    return 0;
}
