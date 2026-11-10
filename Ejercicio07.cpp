#include <iostream>
#include <string>
using namespace std;

string convertirNumero(int numero);
void mostrarResultado(int numero, string letras);

int main() {
    int numero;

    do {
        cout << "Ingrese un numero entero entre 0 y 20: ";
        cin >> numero;
    } while (numero < 0 || numero > 20);

    mostrarResultado(numero, convertirNumero(numero));

    return 0;
}

string convertirNumero(int numero) {
    string letras[21] = {
        "CERO", "UNO", "DOS", "TRES", "CUATRO", "CINCO",
        "SEIS", "SIETE", "OCHO", "NUEVE", "DIEZ", "ONCE",
        "DOCE", "TRECE", "CATORCE", "QUINCE", "DIECISEIS",
        "DIECISIETE", "DIECIOCHO", "DIECINUEVE", "VEINTE"
    };

    return letras[numero];
}

void mostrarResultado(int numero, string letras) {
    cout << numero << " escrito en letras es: " << letras << endl;
}
