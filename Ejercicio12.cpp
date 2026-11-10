#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leer(int a[], int &n);
int eliminarDuplicados(int a[], int n, int b[]);
void mostrar(int v[], int n, string nombre);

int main() {
    int a[MAX], b[MAX], n;

    leer(a, n);

    int cantidad = eliminarDuplicados(a, n, b);

    mostrar(a, n, "Vector original");
    mostrar(b, cantidad, "Vector sin duplicados");

    cout << "Cantidad de elementos validos en B: " << cantidad << endl;

    return 0;
}

void leer(int a[], int &n) {
    do {
        cout << "Cantidad de elementos (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> a[i];
    }
}

int eliminarDuplicados(int a[], int n, int b[]) {
    int cantidad = 0;

    for (int i = 0; i < n; i++) {
        bool existe = false;

        for (int j = 0; j < cantidad; j++)
            if (a[i] == b[j])
                existe = true;

        if (!existe)
            b[cantidad++] = a[i];
    }

    return cantidad;
}

void mostrar(int v[], int n, string nombre) {
    cout << nombre << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
