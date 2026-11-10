#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000;

void leer(double v[], int &n);
void mostrar(double v[], int n);
double mayorDiferencia(double v[], int n, double &elemento1, double &elemento2);

int main() {
    double v[MAX], a, b;
    int n;

    leer(v, n);
    mostrar(v, n);

    double diferencia = mayorDiferencia(v, n, a, b);

    cout << "Mayor diferencia absoluta: " << diferencia << endl;
    cout << "Elementos consecutivos: " << a << " y " << b << endl;

    return 0;
}

void leer(double v[], int &n) {
    do {
        cout << "Cantidad de elementos (2-" << MAX << "): ";
        cin >> n;
    } while (n < 2 || n > MAX);

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

double mayorDiferencia(double v[], int n, double &elemento1, double &elemento2) {
    double mayor = fabs(v[1] - v[0]);

    elemento1 = v[0];
    elemento2 = v[1];

    for (int i = 1; i < n - 1; i++) {
        double diferencia = fabs(v[i + 1] - v[i]);

        if (diferencia > mayor) {
            mayor = diferencia;
            elemento1 = v[i];
            elemento2 = v[i + 1];
        }
    }

    return mayor;
}
