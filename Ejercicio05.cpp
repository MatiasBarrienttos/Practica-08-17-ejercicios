#include <iostream>
using namespace std;

const int MAX = 1000;

void leer(int v[], int &n);
void mostrar(int v[], int n);
bool esCapicua(int v[], int n);

int main() {
    int v[MAX], n;

    leer(v, n);
    mostrar(v, n);

    if (esCapicua(v, n))
        cout << "El vector es capicua." << endl;
    else
        cout << "El vector no es capicua." << endl;

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

void mostrar(int v[], int n) {
    cout << "Vector: ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
}

bool esCapicua(int v[], int n) {
    for (int i = 0; i < n / 2; i++)
        if (v[i] != v[n - 1 - i])
            return false;

    return true;
}
