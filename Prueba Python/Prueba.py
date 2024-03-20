def comprobación(a, b, c):
    
    print("\nLos números son:")
    for i in range (a, b + 1, c):
        print(i)
    
def main(): # Define la función principal llamada "main"
    
    a = int(input("\nIntroduce un número: "))  
    
    b = int(input("\nIntroduce un número: ")) 
    
    c = int(input("\nIntroduce un número: ")) 
    
    while (a >= b or c < 0):
        
        print("\nError, intoduce unos números válidos")
        
        a = int(input("\nIntroduce un número correcto: "))  
    
        b = int(input("\nIntroduce un número correcto: ")) 
    
        c = int(input("\nIntroduce un número mayor que 1: ")) 
        
    comprobación (a, b, c)

main()