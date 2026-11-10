#include <iostream>
using namespace std;

const int MAX = 1000;

void leer(double v[], int &n);
void mostrar(double v[], int n);
double buscarMayor(double v[], int n);

int main() {
    double v[MAX];
    int n;
    leer(v, n);
    mostrar(v, n);
    cout << "Valor maximo: " << buscarMayor(v, n) << endl;
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

void mostrar(double v[], int n) {
    cout << "Vector: ";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

double buscarMayor(double v[], int n) {
    double mayor = v[0];

    for (int i = 1; i < n; i++)
        if (v[i] > mayor)
            mayor = v[i];

    return mayor;
}
