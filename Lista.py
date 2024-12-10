
def agregar_inicio(lista, valor):

    lista.insert(0, valor)
    print(f"{valor} ha sido agregado al inicio de la lista.")


def agregar_final(lista, valor):

    lista.append(valor)
    print(f"{valor} ha sido agregado al final de la lista.")


def agregar_en_posicion(lista, valor, posicion):

    if posicion < 0 or posicion > len(lista):
        print("Posición fuera de rango. No se puede agregar el elemento.")
    else:
        lista.insert(posicion, valor)
        print(f"{valor} ha sido agregado en la posición {posicion} de la lista.")


def eliminar_elemento(lista, valor):

    if valor in lista:
        lista.remove(valor)
        print(f"{valor} ha sido eliminado de la lista.")
    else:
        print(f"El valor {valor} no se encuentra en la lista.")


def mostrar_lista(lista):
    
    if not lista:
        print("La lista está vacía.")
    else:
        for i in lista:  
            print("valor:", i)


def main():
    lista = []  # Lista inicial vacía

    while True:
        print("\n--- Menú de Operaciones ---")
        print("1. Agregar al inicio")
        print("2. Agregar al final")
        print("3. Agregar en una posición específica")
        print("4. Eliminar un elemento")
        print("5. Mostrar la lista")
        print("0. Salir")
        
        opcion = int(input("Seleccione una opción: "))

        match opcion:
        
            case 1:
                valor= int(input("Ingrese el valor a agregar al inicio: "))
                agregar_inicio(lista, valor)
            case 2:
                valor= int(input("Ingrese el valor a agregar al final: "))
                agregar_final(lista, valor)
            case 3:
                valor= int(input("Ingrese el valor a agregar: "))
                posicion= int(input("Ingrese la posicion donde desea agregar el valor: "))
                agregar_en_posicion(lista, valor, posicion)
            case 4:
                valor= int(input("Ingrese el valor a eliminar: "))
                eliminar_elemento(lista, valor)
            case 5:
                mostrar_lista(lista)
            case 0:
                print("Saliendo del programa.")
                break
            case _:
                print("Opción no válida. Intente de nuevo.")


if __name__ == "__main__":
    main()
        
    

