def main(): # Define [def] una función [...()] llamada "main" sin argumentos

    print("\nEscriba su DNI (sin letra): ") # Imprime [print()] el mensaje [("\n...")] en la consola con un salto de linea [("\n")]
    
    dni = int(input()) # Guarda los datos del usuario [input()] de tipo númericos [int()] en la variable [... =] llamada "dni"
    
    res = dni % 23 # Calcula el resto [%] de la variable "dni" entre el número entero 23 y lo guarda en una variable [... =] llamada "res"
    
    lista = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'] # Creación de la lista ordenada (se cuentan las posiciones empezando en 0)
    
    print(f"\nLa letra del DNI es: {lista[res]}") # Imprime el mensaje y la lista (que en este caso solo será una letra) en la consola
    
main() # Llamada a la función