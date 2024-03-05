def suma_n_primeros_nums(num):
    cont = 0;
    for i in range (1, num +1):
        cont = cont + i
    print("\nLa suma de los",num,"primeros números es:",cont)
    
def main():
    num = (int(input("\nIntroduzca un número: ")))
    
    while (num < 0):
        input("\nError, introduzca un número pòsitivo")
        
    suma_n_primeros_nums(num)
    
if __name__ == "__main__":
    main()