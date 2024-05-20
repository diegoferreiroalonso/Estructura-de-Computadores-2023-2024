.data # Declara el comienzo de el segmento de datos (.data)
    
cad1: .string "Introduzca un número:" # Declara una cadena llamada "cad1" de tipo string (.string) con el contenido "Introduzca un número:" 
cad3: .string "El resultado es: " # Declara una cadena llamda "cad3" de tipo string (.string) con el contenido "El resultado es: "
esp: .string "		"
    
    .globl main # Etiqueta global
    .text # Comienza el segmaneto de texto (.text)
    
main: # Declara la etiqueta global (accesible para todos)
	
	li a7, 4 # Llama a la función a7 con código 4 que realiza print_string
    la a0, cad1 # Declara el puntero a0 hacía la cadena "cad1"
    ecall # Llama al sistema
    
    li a7, 4 # Llama a la función a7 con código 4 que realiza print_string
    la a0, esp # Declara el puntero a0 hacía la cadena "esp"
    ecall # Llama al sistema  
    
    li a7, 5 # Llama a la función a7 con código 5 que realiza string
    mv t0, a0
    ecall # Llama al sistema

    
    
funct: 
 li t2, 2
 li t5, 1 #para el beq

 
     bucle:
        beq t0, x0, salir #si el numero es 0 llevamos a salir
        rem t3, t0, t2 #sacar el resto del numero / 2
        div t0, t0, t2 # dividir el numero entre 2
        beq t3, t5, contador #si el resto es = 1 mandamos a contador
        j bucle #volvemos al principio del bucle

contador: # Declara la etiqueta de contador
	addi t4, t4, 1 # Declara una suma inmediata (addi) de t3 y 1 y lo guarda en t3 (así va aumentando el contador)
	j bucle # Declara un salto incondicinal a la función de bucle

salir: # Declara la etiqueta de salir

	li a7, 4 # Imprimr la frase
    la a0, cad3
    ecall
    
    li a7, 1 # Imprimr el resultado
    mv a0, t4
    ecall
    

    li a7, 10 # Salir
    ecall
    
# To do: hacer otra versión con comentarios más claros y concisos