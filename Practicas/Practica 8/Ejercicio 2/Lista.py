def main(): # Define [def] la función [...()] principal llamada "main"
    
    print("\n------------------------------------------------------------------------") # Imprime [print()] el mensaje [/"\n..."] en la consola con un salto de linea [("\n")]
    
    print("Bienvenido al algoritmo que solo imprime números enteros (incluido el 0)") # Imprime [print()] el mensaje [/"\n..."] en la consola sin ningun salto de linea
    
    print("------------------------------------------------------------------------") # Imprime [print()] el mensaje ["\n..."] en la consola sin ningun salto de linea
    
    lista1 = [-4, -2, 0, 2, 4] # Creación de la lista ordenada [..., ...] con valores predeterminados [[-4, -2, 0, 2, 4]] y lo guarda em una variable [lista1 = ...] llamada "lista1"
    
    print("\nLa lista base contiene: ") # Imprime [print()] el mensaje [/"\n..."] en la consola con un salto de linea [("\n")]
    print (lista1) # Imprime [print()] la lsta creada antes "lista1" en la consola sin salto de linea
    
    lista2 = [] # Creación una lista ordenada vacía [[]] y se guarad en la varible [lista2 = ...] llamada "lista2"
    for i in range(len(lista1)): # Crea el bucle con finitos iteradores [for i in range()] con un determinado número de iteraciones (len(lista1)), el cual viene dado por la longitud de la lista1 (es decir, las posiciones totales de la lista, empezando en la 0)
        if lista1[i] >= 0: # Crea el condicional si [if] que ejecuta el codigo si se cumple la condición [[lista1[i]] >= 0], que en este caso es que la lista uno en cada iteración de i, es decir, en cada posición sea mayor que 0 
            lista2.append(lista1[i]) # Se le añade [.append] de la lista1 [(lista1[i])] los elemntos que esten en las posiciones que pasaron la condición anterior a la lista2 [lista2...] en última posición (solo que al estar vacio se empezaran a añadir desde 0)
    
    print("\nLa lista final contiene: ")# Imprime [print()] el mensaje [/"\n..."] en la consola con un salto de linea [("\n")]
    print (lista2) # Imprime [print()] la lsta creada antes "lista1" en la consola sin salto de linea
    
main() # Llama a la función [...()] principal llamada "mainn" sin argumentos [()] que ejecuta el código