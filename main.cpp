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
