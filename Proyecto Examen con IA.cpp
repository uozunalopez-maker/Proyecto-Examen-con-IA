#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funcion para mostrar la matriz
void matriz(string canciones[]) {
    string mat[2][3];

    int posicion = 0;

    // Llenar la matriz con las 6 canciones
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            mat[fila][columna] = canciones[posicion];
            posicion++;
        }
    }

    cout << "\n--- MATRIZ 2x3 ---\n";

    // Mostrar la matriz
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << mat[fila][columna] << " | ";
        }
        cout << endl;
    }
}

// Funcion para crear la pila
void pila(string canciones[]) {

    vector<string> pila;

    // Agregar las 6 canciones originales
    for (int i = 0; i < 6; i++) {
        pila.push_back(canciones[i]);
    }

    // Agregar 2 canciones adicionales
    pila.push_back("Imagine - John Lennon");
    pila.push_back("Shape of You - Ed Sheeran");

    cout << "\n--- PILA ---\n";

    // Mostrar la pila
    for (int i = pila.size() - 1; i >= 0; i--) {
        cout << pila[i] << endl;
    }
}

// Funcion para imprimir los valores finales
void imprimirFinal(string canciones[]) {

    cout << "\n--- CANCIONES DEL ARREGLO ---\n";

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << canciones[i] << endl;
    }
}

int main() {

    // Arreglo estatico de 6 canciones
    string canciones[6] = {
        "Bohemian Rhapsody - Queen",
        "Billie Jean - Michael Jackson",
        "Smells Like Teen Spirit - Nirvana",
        "Hotel California - Eagles",
        "Yesterday - The Beatles",
        "Thriller - Michael Jackson"
    };

    int opcion = 0;

    // El programa continua hasta seleccionar salir
    while (opcion != 4) {

        cout << "\n===== MIS CANCIONES =====\n";
        cout << "1. Mostrar matriz\n";
        cout << "2. Mostrar pila\n";
        cout << "3. Mostrar canciones finales\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            matriz(canciones);
        }
        else if (opcion == 2) {
            pila(canciones);
        }
        else if (opcion == 3) {
            imprimirFinal(canciones);
        }
        else if (opcion == 4) {
            cout << "\nPrograma terminado.\n";
        }
        else {
            cout << "\nOpcion no valida.\n";
        }
    }

    return 0;
}