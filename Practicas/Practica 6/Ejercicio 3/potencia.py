def potencia(bas, exp):
    res = bas ** exp
    print("\nEl resultado de elevar",bas,"al exponente",exp,"es:",res)

def main():
    
    bas = (int(input("\nIntroduzca la base: ")))
    exp = (int(input("\nIntroduce el exponente: ")))
    
    while (bas < 0 or exp < 0):
        print("\nError, introduzca una base y exponente positivos")
        bas= int(input("\nIntroduzca uns base positiva: "))
        exp = int(input("\nIntroduzca un exponente positivo: "))
        
    potencia(bas, exp)
    
if __name__ == "__main__":
    main()