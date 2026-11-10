#include <iostream>
using namespace std;

const int MAX = 93;

void leerCantidad(int &n);
void generarFibonacci(unsigned long long f[], int n);
void mostrar(unsigned long long f[], int n);

int main() {
    unsigned long long fibonacci[MAX];
    int n;

    leerCantidad(n);

    generarFibonacci(fibonacci, n);

    mostrar(fibonacci, n);

    return 0;
}

void leerCantidad(int &n) {
    do {
        cout << "Cantidad de terminos (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);
}

void generarFibonacci(unsigned long long f[], int n) {
    f[0] = 0;

    if (n > 1)
        f[1] = 1;

    for (int i = 2; i < n; i++)
        f[i] = f[i - 1] + f[i - 2];
}

void mostrar(unsigned long long f[], int n) {
    cout << "Serie de Fibonacci: ";

    for (int i = 0; i < n; i++)
        cout << f[i] << " ";

    cout << endl;
}
