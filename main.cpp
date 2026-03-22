/*
Tema: MINI PROYECTO CURSO DE PROGRMACIÓN
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

int main() {
    int opcion;

    // Menu principal
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Calcular promedio\n";
        cout << "4. Salir\n";
        cout << "Seleccione: ";
        cin >> opcion;

        switch(opcion) {
            case 1: registrar(); break;
            case 2: mostrar(); break;
            case 3: promedio(); break;
            case 4: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n";
        }

    } while(opcion != 4);

    return 0;
}