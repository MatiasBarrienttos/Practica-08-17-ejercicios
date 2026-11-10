#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leer(double a[], int &n);
void calcularPromedios(double a[], double p[], int n);
void mostrar(double v[], int n, string nombre);

int main() {
    double a[MAX], p[MAX];
    int n;

    leer(a, n);
    calcularPromedios(a, p, n);

    mostrar(a, n, "Vector A");
    mostrar(p, n - 2, "Promedios de grupos consecutivos");

    return 0;
}

void leer(double a[], int &n) {
    do {
        cout << "Cantidad de elementos (3-" << MAX << "): ";
        cin >> n;
    } while (n < 3 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }
}

void calcularPromedios(double a[], double p[], int n) {
    for (int i = 0; i < n - 2; i++)
        p[i] = (a[i] + a[i + 1] + a[i + 2]) / 3.0;
}

void mostrar(double v[], int n, string nombre) {
    cout << nombre << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
