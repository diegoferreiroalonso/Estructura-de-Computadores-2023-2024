def resultado(a, b, c): # Define [def] la función [...()] llamada "resultado" con argumentos [(a, b, c)]
    
    print("\n\n\nLos números resultantes son:\n") # Imprime [print("...")] el mensaje [("...")] en la consola con tres salto de linea ["\n..."]
    
    for i in range (a, b + 1, c): # Crea un blucle finitas iteraciones [for i in range()] que empieza en en el primer argumento [a], finaliza en el segundo argumento [b + 1] y salta de número en número con el tercer argumento [c], es decir, empieza en a (incluido) hasta b + 1 (incluido b) saltando de c en c númeross
        print(i) # Imprime [print("...")] las iteraciones [(i)] en la consola, es decir, imprime los números que tocan segun los argumentos
    
def main(): # Define [def] la función [...()] principal llamada "main"
    
    print("\n---------------------------------------") # Imprime [print("...")] el mensaje [("\n...")] en la consola con un salto de linea [("\n")]
    print("Calculadora de progresiones aritméticas") # Imprime [print("...")] el mensaje [("...")] en la consola 
    print("---------------------------------------") # Imprime [print("...")] el mensaje [("...")] en la consola 
    
    a = int(input("\nIntroduce un número en el que comnenzar: ")) # Imprime ["..."] el mensaje [("\n...")] en la consola con salto de linea [("\n")] y guarda los datos introducidos por el usuario [input()] de tipo númericos [int()] en la variable[... =] llamada "a"
    
    b = int(input("\nIntroduce un número en el que finalizar: ")) # Imprime ["..."] el mensaje [("\n...")] en la consola con salto de linea [("\n")] y guarda los datos introducidos por el usuario [input()] de tipo númericos [int()] en la variable[... =] llamada "b"
    
    while(a >= b): # Crar un bucle  con infinitas iteraciones [while] si se cumple la condición, en este caso, que el número que comienza [a] sea mayor o igual que [>=] el número que finaliza [b]
        
        print("\nError, intoduce el número de comenzar menor que el de finalizar") # Imprime [print("...")] el mensaje en la consola
        
        a = int(input("\nIntroduce un número correcto: ")) # Reimprime ["..."] el mensaje [("\n...")] en la consola con salto de linea [("\n")] y reescibe los datos introducidos por el usuario [input()] de tipo númericos [int()] en la variable[... =] llamada "a"
    
        b = int(input("\nIntroduce un número correcto: ")) # Reimprime ["..."] el mensaje [("\n...")] en la consola con salto de linea [("\n")] y reescibe los datos introducidos por el usuario [input()] de tipo númericos [int()] en la variable[... =] llamada "b"
    
    c = int(input("\nIntroduce el término: ")) # Imprime ["..."] el mensaje [("\n...")] en la consola con salto de linea [("\n")] y guarda los datos introducidos por el usuario [input()] de tipo númericos [int()] en la variable[... =] llamada "c"
        
    while(c < 0): # Crea un blucle con infinitas iteraciones [while] si se cumple la condición, en este caso, que el terminó [c] sea menor que [<] 0, es decir, que sea negativo
        
        c = int(input("\nError, inttoduce un número positivo: ")) # Reimprime ["..."] el mensaje [("\n...")] en la consola con salto de linea [("\n")] y reescibe los datos introducidos por el usuario [input()] de tipo númericos [int()] en la variable[... =] llamada "c"
        
    resultado (a, b, c) # Llama a la función [resultado] con sus argumentos [(a, b, c)] que ejecuta el codigo

main() # Llama a la función principal [main] sin argumentos [()] que ejcuta el código