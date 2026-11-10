#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leer(double a[], int &n);
void invertirEnSegundoVector(double a[], double b[], int n);
void mostrar(const double v[], int n, string nombre);

int main() {
    double a[MAX], b[MAX];
    int n;

    leer(a, n);
    invertirEnSegundoVector(a, b, n);

    mostrar(a, n, "Vector A");
    mostrar(b, n, "Vector B invertido");

    return 0;
}

void leer(double a[], int &n) {
    do {
        cout << "Cantidad de elementos (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }
}

void invertirEnSegundoVector(double a[], double b[], int n) {
    for (int i = 0; i < n; i++)
        b[i] = a[n - 1 - i];
}

void mostrar(const double v[], int n, string nombre) {
    cout << nombre << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
