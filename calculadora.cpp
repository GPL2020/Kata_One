#include <iostream>
#include <cstdlib>

using namespace std;

double sumar(double x, double y);
double restar(double x, double y);
double multiplicar(double x, double y);
double dividir(double x, double y, bool &ok);

int main(int argc, char *argv[]) {

    int opcion;
    bool ok = true;
    double resultado = 0;

    if (argc >= 3) { // Al menos se tienen que pasar tres argumentos
        // La pos 0 es el nombre del archivo ejecutable
        double n1 = atof(argv[1]);  // argumento 1 - Primer operando
        char operador = *argv[2];   // argumento 2 - Operador
        double n2 = atof(argv[3]);  // argumento 3 - Segundo operando
        
        switch (operador) {
            case '+':
                resultado = sumar(n1, n2);
                break;
            case '-':
                resultado = restar(n1, n2);
                break;
            case 'x':
                resultado = multiplicar(n1, n2);
                break;
            case '/':
                resultado = dividir(n1, n2, ok);
                break;
        }

        if (ok) 
            cout << "= " << resultado << endl;

    }
    else {
        cout << "- Argumentos - " << endl
             << "1 -> Operando 1 <-" << endl
             << "2 -> Operador (+ - x /)" << endl
             << "3 -> Operando 2 <-" << endl;
    }
    
    return 0;
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
    double result = 0;

    if (y != 0) {
        result = x / y;
        ok = true;
    }
    else 
        ok = false;
        
    return result;
}