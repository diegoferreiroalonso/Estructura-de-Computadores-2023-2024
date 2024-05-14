def main(): # Define [def] la función [...()] principal llamada "main" sin argumentos

    print("\n-------------------------------------------------") # Imprime [print()] el mensaje [("\n...")] en la consola con un salto de linea [("\n")]
    
    print("Bienvenido/a a la calculadora de la letra del DNI") # Imprime [print()] el mensaje [("...")] en la consola sin nungún salto de linea
    
    print("-------------------------------------------------") # Imprime [print("...")] el mensaje [("...")] en la consola sin ningún salto de linea

    print("\nEscriba su DNI (sin letra): ") # Imprime [print()] el mensaje [("\n...")] en la consola con un salto de linea [("\n")]
    
    dni = int(input()) # Guarda los datos del usuario [input()] de tipo númericos [int()] en la variable [... =] llamada "dni"
    
    res = dni % 23 # Calcula el resto [%] de la variable "dni" entre el número entero 23 y lo guarda en una variable [... =] llamada "res"
    
    lista = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'] # Creación de la lista ordenada (se cuentan las posiciones empezando en 0) con unos valores ['...', '....'] asignados y lo guarda en la variable [... =] llamada "lista" 
    
    print(f"\nLa letra de su DNI es: {lista[res]}") # Imprime [print()] el mensaje [(f"\n...")] y la lista (que en este caso solo será una letra) en la consola con un saltpo de linea [("\n")] y se inserta la varibale correspondiente [(f"...: {lista[res]})]
    
main() # Llamada a la función [...()]] principal llamada "main" sin argumentos [()] para que ejcetue el código