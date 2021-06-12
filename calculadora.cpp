#include <iostream>

using namespace std;

int menu();
double sumar(double x, double y);
double restar(double x, double y);
double multiplicar(double x, double y);
double dividir(double x, double y, bool &ok);

int main() {

    int opcion;
    double resultado;
    bool ok;

    do {
        opcion = menu();

        double numero1, numero2;

        if (opcion != 5) { 
            cout << "Ingrese el numero 1: ";
            cin >> numero1;

            cout << "Ingrese el numero 2: ";
            cin >> numero2;

            switch (opcion) {
                case 1: 
                    resultado = sumar(numero1, numero2);
                    cout << "Resultado de la suma = " << resultado << endl;
                    break;
                case 2:
                    resultado = restar(numero1, numero2);
                    cout << "Resultado de la resta = " << resultado << endl;
                    break;
                case 3:
                    resultado = multiplicar(numero1, numero2);
                    cout << "Resultado de la multiplicacion = " << resultado << endl;
                    break;
                case 4:
                    resultado = dividir(numero1, numero2, ok);
                    if (ok)
                        cout << "Resultado de la división = " << resultado << endl;
                    else 
                        cout << "No se puede dividir por 0" << endl;
                    break;
            }
        }
    } while (opcion != 5);


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

double dividir(double x, double y, bool &ok) {
    double result;

    if (y != 0) {
        result = x / y;
        ok = true;
    }
    else 
        ok = false;
    return result;
}