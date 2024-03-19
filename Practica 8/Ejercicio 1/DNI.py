def main():

    dni = int(input("\nEscriba su DNI (sin letra): "))
    
    res = dni % 23
    
    
    lista = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E']
    
    print(f"\nLa letra del DNI es: {lista[res]}")
    
main()