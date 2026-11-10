#include <iostream>
#include <string>
using namespace std;

const int MAX = 500;

void leerAlumnos(string nombres[], double notas[], int &n);
void ordenarPorNota(string nombres[], double notas[], int n);
void mostrarTresMejores(string nombres[], double notas[], int n);

int main() {
    string nombres[MAX];
    double notas[MAX];
    int n;

    do {
        cout << "Cantidad de estudiantes (3-" << MAX << "): ";
        cin >> n;
    } while (n < 3 || n > MAX);

    leerAlumnos(nombres, notas, n);

    ordenarPorNota(nombres, notas, n);

    mostrarTresMejores(nombres, notas, n);

    return 0;
}

void leerAlumnos(string nombres[], double notas[], int &n) {
    for (int i = 0; i < n; i++) {
        cout << "Nombre del estudiante " << i + 1 << " (sin espacios): ";
        cin >> nombres[i];

        do {
            cout << "Nota de " << nombres[i] << " (0-100): ";
            cin >> notas[i];
        } while (notas[i] < 0 || notas[i] > 100);
    }
}

void ordenarPorNota(string nombres[], double notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (notas[j] < notas[j + 1]) {
                double auxNota = notas[j];

                notas[j] = notas[j + 1];
                notas[j + 1] = auxNota;

                string auxNombre = nombres[j];

                nombres[j] = nombres[j + 1];
                nombres[j + 1] = auxNombre;
            }
        }
    }
}

void mostrarTresMejores(string nombres[], double notas[], int n) {
    cout << "Los tres mejores estudiantes son:" << endl;

    for (int i = 0; i < 3; i++)
        cout << i + 1 << ". " << nombres[i] << " - " << notas[i] << endl;
}
