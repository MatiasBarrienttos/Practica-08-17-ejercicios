#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leerOrdenado(int v[], int &n, string nombre);
void intercalarOrdenados(int a[], int n, int b[], int m, int c[]);
void mostrar(int v[], int n, string nombre);

int main() {
    int a[MAX], b[MAX], c[2 * MAX], n, m;

    leerOrdenado(a, n, "A");
    leerOrdenado(b, m, "B");

    intercalarOrdenados(a, n, b, m, c);

    mostrar(a, n, "Vector A");
    mostrar(b, m, "Vector B");
    mostrar(c, n + m, "Vector C ordenado");

    return 0;
}

void leerOrdenado(int v[], int &n, string nombre) {
    do {
        cout << "Cantidad de elementos de " << nombre << " (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        do {
            cout << nombre << "[" << i << "]: ";
            cin >> v[i];

            if (i > 0 && v[i] < v[i - 1])
                cout << "Ingrese un valor mayor o igual al anterior." << endl;

        } while (i > 0 && v[i] < v[i - 1]);
    }
}

void intercalarOrdenados(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];
}

void mostrar(int v[], int n, string nombre) {
    cout << nombre << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
