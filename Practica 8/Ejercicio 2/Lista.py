def main(): # Define una nueva función llamada "main"
    
    lista1 = [-4, -2, 0, 2, 4] # Creación de la lista ordenada con valores predeterminados
    
    print("\nLa lista uno contiene: ") # Imprime el mensaje en la consola
    print (lista1) # Imprime la lsta creada antes "lista1" en la consola
    
    lista2 = [] # Creación una lista ordenada vacía
    for i in range(len(lista1)): # Crea el bucle for con un determinado número de iteraciones, el cual viene dado por la longitud de la lista1 (es decir, las posiciones totales de la lista, empezando en la 0)
        if lista1[i] >= 0: # Crea el condicional if (si) que ejecuta el codigo si se cumple la condición, que en este caso es que la lista uno en cada iteración de i, es decir, en cada posición sea mayor que 0 
            lista2.append(lista1[i]) # Se le añade de la lista1 los elemntos que esten en las posiciones que pasaron la condición anterior a la lista2 en última posición (solo que al estar vacio se empezaran a añadir desde 0)
    
    print("\nLa lista dos contiene: ") # Imprime el mensaje en la consola
    print (lista2) # Imprime la lista "lista2" en la cosola
    
main() # Llama a la función