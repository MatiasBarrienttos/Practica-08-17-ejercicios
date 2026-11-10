#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leer(double v[], int &n);
void ordenarBurbuja(double v[], int n);
void mostrar(double v[], int n, string titulo);

int main() {
    double v[MAX];
    int n;

    leer(v, n);

    mostrar(v, n, "Vector original");

    ordenarBurbuja(v, n);

    mostrar(v, n, "Vector ordenado ascendentemente");

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

void ordenarBurbuja(double v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                double auxiliar = v[j];

                v[j] = v[j + 1];
                v[j + 1] = auxiliar;
            }
        }
    }
}

void mostrar(double v[], int n, string titulo) {
    cout << titulo << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
