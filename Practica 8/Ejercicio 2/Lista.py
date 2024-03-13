def main():
    
    lista1 = [-4, -2, 0, 2, 4]
    
    print("\nLa lista uno contiene: ")
    print (lista1)
    
    lista2 = []
    for i in range(len(lista1)):
        if lista1[i] >= 0: 
            lista2.append(lista1[i])
    
    print("\nLa lista dos contiene: ")
    print (lista2)
    
main()