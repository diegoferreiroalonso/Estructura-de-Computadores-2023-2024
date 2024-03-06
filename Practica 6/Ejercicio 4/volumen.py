import math

def menu():
    print("\nCalculadora")
    print("\nMenú:")
    print("\nCono (1)")
    print("Ortoedro(2)")
    print("Salir(3)")
    
    seleccion = (int(input("\nEiga una opción: ")))
    
    return seleccion

def volumen_cono(rad, alt):
    res = (math.pi * (rad ** 2) * alt)/3
    print("\nEl volumen de un cono de radio",rad,"y de altura",alt,"es:",res)
    
def volumen_ortoedro(ari):
    res = (ari ** 3)
    print("\nEl volumen de un octoedro de arista",ari,"es :",res)

def main():
    
    interfaz = menu()
    
    while interfaz < 1 or interfaz > 3:
        print("\nError, introduzca un número valido")
        interfaz = int(input("\nElija una opción: "))
    
    if interfaz == 1:
        rad = (float(input("\nIntroduce el radio del cono: ")))
        alt =(float(input("Introduce la altura del cono: ")))
        volumen_cono(rad, alt)
    elif interfaz == 2:
        ari = (float(input("Introduzca la longitud de la arista: ")))
        volumen_ortoedro(ari)
    elif interfaz == 3:
        print("\nSaliendo ...")

if __name__ == "__main__":
    main()