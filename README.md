1. Inicialización de listas vacías

vertices = []
caras = []

Se crean dos listas vacías:
	•	vertices: Almacena las coordenadas (x, y, z) de cada vértice del modelo 3D.
	•	caras: Almacena las caras del modelo, representadas por índices que hacen referencia a los vértices.

2. Bucle principal del men

while True:

El programa entra en un bucle while True, que se repetirá indefinidamente hasta que el usuario seleccione la opción de Salir.

3. Menú de opciones

print("\n--- Menú de Figura 3D ---")
print("1. Registrar vértices")
print("2. Registrar caras")
print("3. Guardar modelo en archivo OBJ")
print("4. Salir")


4. Captura de la opción del usuar

opcion = input("Seleccione una opción: ")

El valor que introduce el usuario se almacena en la variable opcion

5.Opción 1: Registrar vérti

if opcion == "1":
    num_vertices = int(input("Ingrese el número de vértices: "))
    for i in range(num_vertices):
        try:
            x, y, z = map(float, input(f"Vértice {i+1} (x y z): ").split())
            vertices.append([x, y, z])
        except ValueError:
            print("Error: Ingrese tres números separados por espacio.")
