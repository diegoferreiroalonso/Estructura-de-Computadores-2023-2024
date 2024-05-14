import math # Importa [import] el paquete "math", que tiene funciones específicas

def factorial(num): # Define una función llamada "factorial" con el parámetro "n"
    
    res = math.factorial(num) # Utilizando una función del paquete "math" calculamos el factorial de "num" facilmente y lo guarda en la variable "res"
    
    print("\nEl factorial de",num,"es :",res) # Imprime el mensaje con las variables en la consola

def main(): # Define la función principal llamada "main"
    
    num = int(input("\nIntroduce un número: ")) # Imprime el mensaje en la consola [""], guarda los datos que introduzca el usuario [input] de tipo númerico [int] y lo guarda en una variable [n]
    
    factorial(num) # Llama a la función "factorial" con el parámetro "num"
    
main() # Llama a la función principal "main" para que se ejecute el programa