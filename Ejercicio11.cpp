#include <iostream>
using namespace std;

const int MAX = 1000;

void leer(double v[], int &n);
void contarCategorias(double v[], int n, int &positivos, int &negativos, int &ceros);
void mostrar(double v[], int n);

int main() {
    double v[MAX];
    int n, positivos, negativos, ceros;

    leer(v, n);

    contarCategorias(v, n, positivos, negativos, ceros);

    mostrar(v, n);

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}

void leer(double v[], int &n) {
    do {
        cout << "Cantidad de elementos (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}

void contarCategorias(double v[], int n, int &positivos, int &negativos, int &ceros) {
    positivos = negativos = ceros = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] > 0)
            positivos++;
        else if (v[i] < 0)
            negativos++;
        else
            ceros++;
    }
}

void mostrar(double v[], int n) {
    cout << "Vector: ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
