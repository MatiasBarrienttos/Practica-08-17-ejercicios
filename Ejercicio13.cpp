#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000;

void leer(int v[], int &n);
void invertir(int v[], int n);
void mostrar(int v[], int n, string titulo);

int main() {
    int v[MAX], n;

    leer(v, n);

    mostrar(v, n, "Vector antes de invertir");

    invertir(v, n);

    mostrar(v, n, "Vector despues de invertir");

    return 0;
}

void leer(int v[], int &n) {
    do {
        cout << "Cantidad de elementos (1-" << MAX << "): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}

void invertir(int v[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int auxiliar = v[i];

        v[i] = v[n - 1 - i];
        v[n - 1 - i] = auxiliar;
    }
}

void mostrar(int v[], int n, string titulo) {
    cout << titulo << ": ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}
