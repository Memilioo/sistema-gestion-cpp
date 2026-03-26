#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Agregar\n";
        cout << "2. Mostrar\n";
        cout << "3. Eliminar\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Opcion Agregar seleccionada\n";
                break;
            case 2:
                cout << "Opcion Mostrar seleccionada\n";
                break;
            case 3:
                cout << "Opcion Eliminar seleccionada\n";
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida\n";
        }

    } while (opcion != 4);

    return 0;
}