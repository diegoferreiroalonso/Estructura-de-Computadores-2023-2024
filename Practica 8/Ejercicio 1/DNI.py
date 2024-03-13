def main():

    dni = int(input("Escriba su DNI (sin letra): "))
    
    res = dni % 23
    
    
    lista = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E']
    
    print(f"\nLA letra del DNI es: {lista[res]}")
    
main()