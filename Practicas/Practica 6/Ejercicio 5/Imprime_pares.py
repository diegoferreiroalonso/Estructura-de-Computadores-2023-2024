def imprime_pares_intervalo(num1, num2): # Define una función llamada "imprime_pares_intervalo"

    for i in range (num1, num2 + 1): # Crea un bucle con determinadas iteraciones hasta que se cumpla la condición, que es que recorra desde el "num1" hasta el "num2" (ambos incluidos)
        if (i % 2 == 0): # Crea un condicional if (si) que ejecuta el siguiente código si se cumple la condición, que es que el resto de dividir algún número entre "num1" y "num2" entre 2, su resto sea igual a 0
            print("\nLos números pares que hay entre",num1,"y",num2,"son:", i, end=" ") # Imprime el mensaje i veces con las variables que lo hayan cumplido y hace un salto de linea [end=" "]

def main(): # Define la función principal "main"
    
    num1 = int(input("\nEscriba un número: ")) # Imprime el mensaje en la consola [""], guarda los datos introducizos por el usuario [input] de tipo númerico [int] y lo guarda en la variable "num1"
    num2 = int(input("\nEscriba otro número: ")) # Imprime el mensaje en la consola [""], guarda los datos introducizos por el usuario [input] de tipo númerico [int] y lo guarda en la variable "num2"
    
    while (num1 > num2): # Crea un bucle con infinitas iteraciones hasta que la condición no se cumpla
        print("\nError, introduzca el primer número menor que el segundo") # Imprime el mensaje en la consola
        num1 = int(input("\nEscriba un número: ")) # Se reescribe el valor de la variable "num1" con el mismo proceso que antes
        num2 = int(input("\nEscriba otro número: ")) # Se reescribe el valor de la variable "num2" con el mismo proceso que antes
        
    imprime_pares_intervalo(num1, num2) # Llama a la función "imprime_pares_intervalo" y se ejecuta
    
main() # Llama a la función principal "main" y ejecuta el programa