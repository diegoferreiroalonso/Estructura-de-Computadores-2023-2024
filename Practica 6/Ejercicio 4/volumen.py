import math # Importa [import] el paquete "math", que tiene funciones específicas

def menu(): # Define una función llamada "menu" 
    
    print("\nCalculadora") # Imprime el mensaje en la consola
    print("\nMenú:") # Imprime el mensaje en la consola
    print("\nCono (1)") # Imprime el mensaje en la consola
    print("Ortoedro(2)") # Imprime el mensaje en la consola
    print("Salir(3)") # Imprime el mensaje en la consola
    
    seleccion = (int(input("\nEiga una opción: "))) # Imprime el mensaje por pantalla [" "], guarda los datos que introduce el usuario [input] de tipo númerico [int] y lo almacena en la variable "seleccion"
    
    return seleccion # Valor que devulve la función

def volumen_cono(rad, alt): # Define la función "volumen_cono" que tiene como parámetros el radio "rad" y la altura "alt"
    
    res = (math.pi * (rad ** 2) * alt)/3 # Aplicando una formula se hacen los calulos y se guardan en la variable "res"
    print("\nEl volumen de un cono de radio",rad,"y de altura",alt,"es:",res) # Imprime el mensaje en la consola con las variables
    
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

main()