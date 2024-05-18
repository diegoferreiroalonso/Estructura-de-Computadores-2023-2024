
    .data # Comienza el segmento de datos (.data)
    
datos: # Declara los datos (datos:)
    .word 3, 7 # Declara datos de tipo word (.word) (32 bits), en este caso los números 3 y 7 separados por una coma

cad1: .string "Introduzca el primer número:" # Declara una cadena de caracteres (.string) llamada "cad1" (cad1: ) con el contenido "Introduzca el primer número:"
cad2: .string "Introduzca el segundo número:" # Declara una cadena de caracteres (.string) llamada "cad2" (cad2: ) con el contenido "Introduzca el segundo número:"
cad3: .string "Introduzca el tercer número:" # Declara una cadena de caracteres (.string) llamada "cad3" (cad3: ) con el contenido "Introduzca el tercer número:"
cad4: .string "Introduzca el cuarto número:" # Declara una cadena de caracteres (.string) llamada "cad4" (cad4: ) con el contenido "Introduzca el cuarto número:"
espa: .string "		"

    .globl main # Declara la directiva de etiqueta global (.globl) (accesible desde ortros archivos)
    .text # Comienza el segmento de texto (.text)

main: # Declara la función principal del programa (main:)

    li a7, 4 # Llamada al código 4 de a7 que realiza la función de print_string
    la a0, cad1 # Imprime la cadena "cad1" que está en la dirección a0 (puntero a0 -> cad1)
    ecall # Llamada al sistema
    
    li a7, 4 # Llamada al código 4 de a7 que realiza la función de print_string
    la a0, espa # Imprime la cadena "espa" que está en la dirección a0 (puntero a0 -> espa)
    ecall # Llamada al sistema
    
    li a7, 5 # Llamada al código 5 de a7 que realiza la función de  read_int
    ecall # Llamada al sistema
    
    mv t0, a0
    
    li a7, 4
    la a0, cad2
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    li a7, 5
    ecall
    
    mv t1, a0
    
    li a7, 4
    la a0, cad3
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    li a7, 5
    ecall
    
    mv t2, a0

    li a7, 4
    la a0, cad4
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    li a7, 5
    ecall
    
    mv t3, a0
    
    add t4, t0, t1
    
    li a7, 1
    mv a0, t4
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    sub t5, t2, t3
    
    li a1, 1
    mv a0, t5
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    add a1, t0, t1
    add a2, t2, t3
    add a3, a2, a1
    
    li a7, 1
    mv a0, a3
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    sll a4, t0, t0
    
    li a7, 1
    mv a0, a4
    ecall
    
    li a7, 4
    la a0, espa
    ecall
    
    la a0, datos
    lw a5, 0(a0)
    lw a6, 4(a0)
    
    rem a7, a6, a5
    
    li a7, 1
    mv a0, a7
    ecall
    
    li a7, 4
    la a0, espa
    ecall

    li a7, 10
    ecall