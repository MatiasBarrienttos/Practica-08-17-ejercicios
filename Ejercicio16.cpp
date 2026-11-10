#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

void registrarAlumno(string nombres[], double notas[], int &cantidad);
void listarAlumnos(string nombres[], double notas[], int cantidad);
void ordenarAlfabeticamente(string nombres[], double notas[], int cantidad);
void mostrarNotaMasAlta(string nombres[], double notas[], int cantidad);
double calcularPromedio(double notas[], int cantidad);

int main() {
    string nombres[MAX];
    double notas[MAX];
    int cantidad = 0, opcion;

    do {
        cout << "\nMENU DE GESTION DE ALUMNOS" << endl;
        cout << "1. Registrar alumno y nota" << endl;
        cout << "2. Listar alumnos" << endl;
        cout << "3. Ordenar alfabeticamente por nombre" << endl;
        cout << "4. Mostrar alumno(s) con la nota mas alta" << endl;
        cout << "5. Calcular promedio de notas" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarAlumno(nombres, notas, cantidad);
                break;

            case 2:
                listarAlumnos(nombres, notas, cantidad);
                break;

            case 3:
                ordenarAlfabeticamente(nombres, notas, cantidad);
                if (cantidad > 0)
                    cout << "Lista ordenada alfabeticamente." << endl;
                break;

            case 4:
                mostrarNotaMasAlta(nombres, notas, cantidad);
                break;

            case 5:
                if (cantidad > 0)
                    cout << "Promedio de notas: " << calcularPromedio(notas, cantidad) << endl;
                else
                    cout << "No hay alumnos registrados." << endl;
                break;

            case 6:
                cout << "Programa finalizado." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 6);

    return 0;
}

void registrarAlumno(string nombres[], double notas[], int &cantidad) {
    if (cantidad >= MAX) {
        cout << "Se alcanzo la capacidad maxima." << endl;
        return;
    }

    cout << "Nombre del alumno (sin espacios): ";
    cin >> nombres[cantidad];

    do {
        cout << "Nota (0-100): ";
        cin >> notas[cantidad];
    } while (notas[cantidad] < 0 || notas[cantidad] > 100);

    cantidad++;

    cout << "Alumno registrado correctamente." << endl;
}

void listarAlumnos(string nombres[], double notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }

    for (int i = 0; i < cantidad; i++)
        cout << i + 1 << ". " << nombres[i] << " - Nota: " << notas[i] << endl;
}

void ordenarAlfabeticamente(string nombres[], double notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay alumnos para ordenar." << endl;
        return;
    }

    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - 1 - i; j++) {
            if (nombres[j] > nombres[j + 1]) {
                string auxNombre = nombres[j];

                nombres[j] = nombres[j + 1];
                nombres[j + 1] = auxNombre;

                double auxNota = notas[j];

                notas[j] = notas[j + 1];
                notas[j + 1] = auxNota;
            }
        }
    }
}

void mostrarNotaMasAlta(string nombres[], double notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }

    double mayor = notas[0];

    for (int i = 1; i < cantidad; i++)
        if (notas[i] > mayor)
            mayor = notas[i];

    cout << "Nota mas alta: " << mayor << endl;
    cout << "Alumno(s) con esa nota:" << endl;

    for (int i = 0; i < cantidad; i++)
        if (notas[i] == mayor)
            cout << nombres[i] << endl;
}

double calcularPromedio(double notas[], int cantidad) {
    double suma = 0;

    for (int i = 0; i < cantidad; i++)
        suma += notas[i];

    return suma / cantidad;
}
