#include <iostream>

using namespace std;

void generar_obj() {
    int num_vertices;
    cout << "Ingrese el número de vértices: ";
    cin >> num_vertices;

    // Arreglo de vértices (cada vértice tiene 3 coordenadas)
    float vertices[num_vertices][3];

    // Pedir los datos de cada vértice (coordenadas x, y, z)
    for (int i = 0; i < num_vertices; i++) {
        cout << "Vértice " << i + 1 << " (x y z): ";
        cin >> vertices[i][0] >> vertices[i][1] >> vertices[i][2];
    }

    // Imprimir los vértices en el formato .obj
    cout << "Generando el archivo modelo.obj...\n";
    for (int i = 0; i < num_vertices; i++) {
        // Imprimir cada vértice en la consola (simulando la salida de un archivo)
        cout << "v " << vertices[i][0] << " " << vertices[i][1] << " " << vertices[i][2] << endl;
    }

    cout << "Archivo OBJ generado correctamente. Puedes redirigir la salida a un archivo usando > en la terminal.\n";
}

int main() {
    generar_obj();
    return 0;
}
