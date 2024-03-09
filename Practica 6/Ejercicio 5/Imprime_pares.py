def imprime_pares_intervalo(num1, num2):

    for i in range (num1, num2 + 1):
        if (i % 2 == 0):
            print("\nLos números pares que hay entre",num1,"y",num2,"son:", i, end=" ")

def main():
    
    num1 = int(input("\nEscriba un número: "))
    num2 = int(input("\nEscriba otro número: "))
    
    while (num1 > num2):
        print("\nError, introduzca el primer número menor que el segundo")
        num1 = int(input("\nEscriba un número: "))
        num2 = int(input("\nEscriba otro número: "))
        
    imprime_pares_intervalo(num1, num2)
    
if __name__ == "__main__":
    main()