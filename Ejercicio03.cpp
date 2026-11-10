#include <iostream>
using namespace std;

const int MAX = 1000;

void leer(double v[], int &n);
void mostrar(double v[], int n);
double calcularPromedio(double v[], int n);

int main() {
    double v[MAX];
    int n;

    leer(v, n);
    mostrar(v, n);

    cout << "Promedio: " << calcularPromedio(v, n) << endl;

    return 0;
}

void leer(double v[], int &n) {
    do {
        cout << "Cantidad de elementos (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

void mostrar(double v[], int n) {
    cout << "Vector: ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}

double calcularPromedio(double v[], int n) {
    double suma = 0;

    for (int i = 0; i < n; i++)
        suma += v[i];

    return suma / n;
}
