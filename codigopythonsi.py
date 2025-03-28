# -*- coding: utf-8 -*-
"""
Created on Thu Mar 27 19:38:42 2025

@author: andre
"""

# Pedir el número de vértices y crear una lista vacía para guardarlos
num_vertices = int(input("Ingrese el número de vértices: "))
vertices = []

# Pedir los datos de cada vértice (coordenadas x, y, z)
for i in range(num_vertices):
    # Solicitar las coordenadas de cada vértice como entrada
    x, y, z = map(float, input(f"Vértice {i+1} (x y z): ").split())
    # Guardar las coordenadas en la lista de vértices
    vertices.append([x, y, z])

# Pedir el número de caras y crear una lista vacía para guardarlas
num_caras = int(input("Ingrese el número de caras: "))
caras = []

# Pedir los índices de los vértices para cada cara
for i in range(num_caras):
    # Solicitar los índices de los vértices de cada cara
    indices = list(map(int, input(f"Cara {i+1} (índices separados por espacio): ").split()))
    # Guardar los índices en la lista de caras
    caras.append(indices)

# Crear el contenido que se va a guardar en el archivo OBJ
contenido = ""

# Agregar los vértices al contenido
for v in vertices:
    contenido += f"v {v[0]} {v[1]} {v[2]}\n"

# Agregar las caras al contenido
for f in caras:
    contenido += "f " + " ".join(map(str, f)) + "\n"

# Escribir el contenido en un archivo OBJ
with open("modelo.obj", "w") as archivo:
    archivo.write(contenido)

# Confirmación de que el archivo se generó correctamente
print("Archivo OBJ generado exitosamente como 'modelo.obj'")