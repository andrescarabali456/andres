#include <iostream>
#include <string>

struct Destino {
    std::string nombre;
    double distancia; 
};

void mostrarRuta(Destino ruta[], int cantidad) {
    std::cout << "Ruta más eficiente:\n";
    for (int i = 0; i < cantidad; i++) {
        std::cout << i + 1 << ". " << ruta[i].nombre 
                  << " - " << ruta[i].distancia << " km\n";
    }
}

int main() {
    const int cantidadDestinos = 9;
    Destino ruta[cantidadDestinos] = {
        {"Universidad Sergio Arboleda", 0},
        {"Villavicencio", 121},
        {"Soacha", 114},
        {"La Vega", 83},
        {"Cajicá", 54},
        {"Toca", 138},
        {"Tunja", 26},
        {"La Calera", 157},
        {"Universidad Sergio Arboleda", 17}
    };

    mostrarRuta(ruta, cantidadDestinos);

    return 0;
}
