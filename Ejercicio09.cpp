#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leer(int v[], int &n, string nombre);
void concatenar(int a[], int n, int b[], int m, int c[]);
void mostrar(int v[], int n, string nombre);

int main() {
    int a[MAX], b[MAX], c[2 * MAX], n, m;

    leer(a, n, "A");
    leer(b, m, "B");

    concatenar(a, n, b, m, c);

    mostrar(a, n, "Vector A");
    mostrar(b, m, "Vector B");
    mostrar(c, n + m, "Vector C concatenado");

    return 0;
}

void leer(int v[], int &n, string nombre) {
    do {
        cout << "Cantidad de elementos de " << nombre << " (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> v[i];
    }
}

void concatenar(int a[], int n, int b[], int m, int c[]) {
    for (int i = 0; i < n; i++)
        c[i] = a[i];

    for (int i = 0; i < m; i++)
        c[n + i] = b[i];
}

void mostrar(int v[], int n, string nombre) {
    cout << nombre << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
