def main(): # Define una nueva función llamada "main"

    print("\nEscriba su DNI (sin letra): ") # Imprime el mensaje en la consola
    
    dni = int(input()) # Recibe datos del usuario
    
    res = dni % 23 # Calcula esl resto y lo guarda en una variable
    
    lista = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'] # Creación de la lista ordenada (se cuentan las posiciones empezando en 0)
    
    print(f"\nLa letra del DNI es: {lista[res]}") # Imprime el mensaje y la lista (que en este caso solo será una letra) en la consola
    
main() # Llamada a la función