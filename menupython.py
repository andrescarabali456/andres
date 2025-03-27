# Inicializar listas vacías
vertices = []
caras = []

while True:
    print("\n--- Menú de Figura 3D ---")
    print("1. Registrar vértices")
    print("2. Registrar caras")
    print("3. Guardar modelo en archivo OBJ")
    print("4. Salir")

    opcion = input("Seleccione una opción: ")

    if opcion == "1":
        num_vertices = int(input("Ingrese el número de vértices: "))
        for i in range(num_vertices):
            try:
                x, y, z = map(float, input(f"Vértice {i+1} (x y z): ").split())
                vertices.append([x, y, z])
            except ValueError:
                print("Error: Ingrese tres números separados por espacio.")

    elif opcion == "2":
        if not vertices:
            print("Debe registrar vértices antes de agregar caras.")
        else:
            num_caras = int(input("Ingrese el número de caras: "))
            for i in range(num_caras):
                try:
                    indices = list(map(int, input(f"Cara {i+1} (índices separados por espacio): ").split()))
                    if all(0 <= cada_indice_dentro_de_la_lista < len(vertices) for cada_indice_dentro_de_la_lista in indices):
                        caras.append(indices)
                    else:
                        print("Error: Los índices deben corresponder a vértices existentes.")
                except ValueError:
                    print("Error: Ingrese números enteros separados por espacio.")

    elif opcion == "3":
        if not vertices:
            print("No hay vértices registrados.")
        else:
            contenido = ""
            for v in vertices:
                contenido += f"v {v[0]} {v[1]} {v[2]}\n"
            for f in caras:
                contenido += "f " + " ".join(map(str, f)) + "\n"

            with open("modelo.obj", "w") as archivo:
                archivo.write(contenido)

            print("Archivo 'modelo.obj' generado exitosamente.")

    elif opcion == "4":
        print("Saliendo del programa...")
        break

    else:
        print("Opción no válida. Intente de nuevo.")