#include <iostream>

using namespace std;

int menu();
double sumar(double x, double y);
double restar(double x, double y);
double multiplicar(double x, double y);
double dividir(double x, double y);

int main(int argc, char *argv[]) {

    int opcion;
    double resultado;

    
    
    cout << "Ingrese ENTER para finalizar... ";
    cin.ignore();
    cin.get();

    return 0;
}

int menu() {
    int op;

    cout << "1) Sumar" << endl
         << "2) Restar" << endl
         << "3) Multiplicar" << endl
         << "4) Dividir" << endl
         << "5) Salir" << endl;
     cin >> op;

    return op;
}

double sumar(double x, double y) {
    return (x + y);
}

double restar(double x, double y) {
    return (x - y);
}

double multiplicar(double x, double y) {
    return (x * y);
}

double dividir(double x, double y) {
    double result;

    if (y != 0)
        result = x / y;
    else 
        result = 0;
    return result;
}