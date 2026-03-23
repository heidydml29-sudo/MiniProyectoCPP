/*
Tema: MINI PROYECTO CURSO DE PROGRAMACIÓN
Autor: HEIDY MENDOZA 
Fecha: 2024-06-17
Enunciado: 
*/

#include <iostream>
using namespace std;

// Arreglos para guardar datos
string nombres[50];
float notas[50];
int cantidad = 0;

// Declaración de funciones
void registrar();
void mostrar();
void promedio();
void mayorNota();

int main() {
    int opcion;

    // Menu principal
    do {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Calcular promedio\n";
        cout << "4. Mayor nota\n";
        cout << "5. Salir\n";
        cout << "Seleccione: ";
        cin >> opcion;
        if (opcion < 1 || opcion > 5) {
        cout << "Opcion fuera de rango\n";
        continue;
}

        switch(opcion) {
            case 1: registrar(); break;
            case 2: mostrar(); break;
            case 3: promedio(); break;
            case 4: mayorNota(); break;
            case 5: cout << "Saliendo...\n"; break;

            default: cout << "Opcion invalida\n";
        }

    } while(opcion != 5);

    return 0;
}
// Funcion para registrar estudiantes
void registrar() {

    // Verifica que no se pase del limite
    if (cantidad < 50) {

        cout << "Ingrese nombre: ";
        cin >> nombres[cantidad];

        cout << "Ingrese nota (0-10): ";
        cin >> notas[cantidad];

        // Validacion basica
        if (notas[cantidad] < 0 || notas[cantidad] > 10) {
            cout << "Nota invalida\n";
            return;
        }

        cantidad++; // aumenta contador
        cout << "Estudiante registrado correctamente\n";

    } else {
        cout << "Limite alcanzado\n";
    }
}
// Funcion para mostrar estudiantes
void mostrar() {

    if (cantidad == 0) {
        cout << "No hay datos\n";
        return;
    }

    for (int i = 0; i < cantidad; i++) {
        cout << i+1 << ". " << nombres[i] << " - " << notas[i] << endl;
    }
}
// Funcion para calcular promedio
void promedio() {

    if (cantidad == 0) {
        cout << "No hay datos\n";
        return;
    }

    float suma = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }

    float prom = suma / cantidad;

    cout << "El promedio general de notas es: " << prom << endl;
}

// Funcion para mostrar la mayor nota
void mayorNota() {

    if (cantidad == 0) {
        cout << "No hay datos\n";
        return;
    }

    float mayor = notas[0];

    for (int i = 1; i < cantidad; i++) {
        if (notas[i] > mayor) {
            mayor = notas[i];
        }
    }

    cout << "La mayor nota es: " << mayor << endl;
}
