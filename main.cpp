#include <iostream>
#include <cmath>

using namespace std;

/* Alumno: Jaiker Alexander */

// Funci�n para calcular la combinatoria
double combinatoria(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        cout << "Error: n y r deben ser n�meros enteros no negativos y r <= n" << endl;
        return -1;
    } else {
        double resultado = 1;
        for (int i = 1; i <= r; i++) {
            resultado = resultado * (n - i + 1) / i;
        }
        return resultado;
    }
}

// Funci�n para calcular las permutaciones
double permutaciones(int m, int n) {
    if (m < 0 || n < 0 || n > m) {
        cout << "Error: m y n deben ser n�meros enteros no negativos y n <= m" << endl;
        return -1;
    } else {
        double resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado = resultado * (m - i + 1);
        }
        return resultado;
    }
}

// Funci�n para calcular el exponente de un n�mero
double exponente(double a, int n) {
    if (n < 0) {
        cout << "Error: el exponente debe ser un n�mero entero no negativo" << endl;
        return -1;
    } else {
        return pow(a, n);
    }
}

int main() {
    int opcion;
    do {
        cout << "Men� de opciones:" << endl;
        cout << "1. Calcular combinatoria" << endl;
        cout << "2. Calcular permutaciones" << endl;
        cout << "3. Calcular exponente" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n, r;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                cout << "Ingrese el valor de r: ";
                cin >> r;
                double resultado = combinatoria(n, r);
                if (resultado != -1) {
                    cout << "La combinatoria es: " << resultado << endl;
                }
                break;
            }
            case 2: {
                int m, n;
                cout << "Ingrese el valor de m: ";
                cin >> m;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                double resultado = permutaciones(m, n);
                if (resultado != -1) {
                    cout << "Las permutaciones son: " << resultado << endl;
                }
                break;
            }
            case 3: {
                double a;
                int n;
                cout << "Ingrese el valor de a: ";
                cin >> a;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                double resultado = exponente(a, n);
                if (resultado != -1) {
                    cout << "El exponente es: " << resultado << endl;
                }
                break;
            }
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opci�n inv�lida. Intente nuevamente." << endl;
        }
    } while (opcion != 4);

    return 0;
}
