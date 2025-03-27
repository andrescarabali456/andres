#include <iostream>

using namespace std;

int main() {
    int opcion;
    int num_vertices = 0, num_caras = 0;
    float vertices[100][3]; // Máximo de 100 vértices
    int caras[100][10]; // Máximo de 100 caras con hasta 10 vértices cada una

    do {
        cout << "\n--- Menú de Figura 3D ---\n";
        cout << "1. Registrar vértices\n";
        cout << "2. Registrar caras\n";
        cout << "3. Imprimir figura\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese el número de vértices: ";
            cin >> num_vertices;

            for (int i = 0; i < num_vertices; i++) {
                cout << "Vértice " << i + 1 << " (x y z): ";
                cin >> vertices[i][0] >> vertices[i][1] >> vertices[i][2];
            }
        } 
        else if (opcion == 2) {
            if (num_vertices == 0) {
                cout << "Debe registrar vértices antes de agregar caras.\n";
            } 
            else {
                cout << "Ingrese el número de caras: ";
                cin >> num_caras;

                for (int i = 0; i < num_caras; i++) {
                    cout << "Número de vértices en la cara " << i + 1 << ": ";
                    int num_indices;
                    cin >> num_indices;

                    cout << "Ingrese los índices de los vértices (separados por espacio): ";
                    for (int j = 0; j < num_indices; j++) {
                        cin >> caras[i][j];
                    }
                    caras[i][num_indices] = -1; // Marcar el final de la cara
                }
            }
        } 
        else if (opcion == 3) {
            cout << "\n--- Modelo 3D en formato OBJ ---\n";
            for (int i = 0; i < num_vertices; i++) {
                cout << "v " << vertices[i][0] << " " << vertices[i][1] << " " << vertices[i][2] << endl;
            }

            for (int i = 0; i < num_caras; i++) {
                cout << "f";
                for (int j = 0; caras[i][j] != -1; j++) {
                    cout << " " << caras[i][j] + 1; // +1 para formato OBJ
                }
                cout << endl;
            }
        } 
        else if (opcion == 4) {
            cout << "Saliendo del programa...\n";
        } 
        else {
            cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}
