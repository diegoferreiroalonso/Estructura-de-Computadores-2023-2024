
	.data # Declara el comienzo de el segmento de datos (.data)
    
cad1: .string "Introduzca un número:" # Declara una cadena llamada "cad1" de tipo string (.string) con el contenido "Introduzca un número:" 
cad2: .zero 100 # Declara una cadena llamada "cad2" de reserva de bytes de memoria (.zero) con una cantidad de n = 100 con el valor 0 en cada posición
cad3: .string "El resultado es: " # Declara una cadena llamda "cad3" de tipo string (.string) con el contenido "El resultado es: "
cad4: .zero 100 # Declara una cadena llamada "cad4" de reserva de bytes de memoria (.zero) con una cantidad de n = 100 con el valor 0 en cada posición
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
    
    li a7, 5 # Llama a la función a7 con código 5 que realiza read_int
    mv a0, t0
    la a0, cad2 # Declara el puntero a0 hacía la cadena "cad2"
    li a2, 100 # Declara la carga inmediata en a2 el valor de 100
    ecall # Llama al sistema
    
    li t3, 0 # Declara la carga instantanea (li) en t3 de 0 a modo de inicialización
    
bucle: # Declara la etiqueta de bucle

	la a3, cad2 # Declara el puntero a3 hacía la cadena "cad2"
	la a4, cad4 # Declara el puntero a4 hacía la cadena "cad4"
    li t1, 0 # Declara la carga inmediata en t1 de 0 a modo de inicialización
    li t2, 2 # Declara la carga inmediata en t2 de 2 para dividir
    li t4, 1 # Declara la carga inmediata en t4 de 0, en este caso siendo un valor estático
	lb t0, 0(a3) # Declara la carga del bit en t0 del primer argumento de a3 (cad2)
    rem t1, t0, t2 # Declara el resto (rem) de dividir t0 (el número) entre t2 (2) y lo guarda en t1
    sb t1, 0(a4) # Declara el almacenamiento de un byte de t1 (el resto) en 0(a4)
    beq t1,t4, contador # Declara una instrucción de salto condicional, la cual salta a la etiqueta contador si t1 es iagual a 1
    addi t0, t0, -1 # Declara una suma inmediata (addi) de t0 y -1 y lo guarda en t0, en este caso va restando hasta que no puede más
    beq t0, t1, salir
    j bucle # Declara un salto incodiicional a la función de bucle
    
contador: # Declara la etiqueta de contador

	addi t3, t3, 1 # Declara una suma inmediata (addi) de t3 y 1 y lo guarda en t3 (así va aumentando el contador)
	j bucle # Declara un salto incondicinal a la función de bucle

    
salir: # Declara la etiqueta de salir

	li a7, 4 # Imprimr la frase
    la a0, cad3
    ecall
    
    li a7, 1 # Imprimr el resultado
    mv a0, t3
    ecall

    li a7, 10 # Salir
    ecall
    
# To do: hacer otra versión con comentarios más claros y concisos