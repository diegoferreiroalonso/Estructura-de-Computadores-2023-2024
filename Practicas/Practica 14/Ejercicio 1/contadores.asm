
	.data # Comienza el segmento de datos (.data)
    
cad1: .string "Introduce una cadena:"
cad2: .zero 100
cad3: .string "El resultado es: "
cad4: .string "El número de 'a' es: "
esp: .string "		"
    
    .globl main
    .text # Comienza el segmaneto de texto (.text)
    
main:
	
    li a7, 4 # Imprime la cadena
    la a0, cad1
    ecall
    
    li a7, 4 # Imprime el espacio
    la a0, esp
    ecall
    
    li a7, 8 # Lee la cadena
    la a0, cad2
    li a1, 100
    ecall
    
    li t2, 0
    li t3, 97

bucle:
    lb t0, 0(a0)
    beq t0, zero, salir
    add t1, t0, t1
    addi a0, a0, 1
    beq t0, t3, contador
    j bucle
    
contador:
	addi t2, t2, 1
    j bucle
    
salir:

    li a7, 4 # Imprime la cadena
    la a0, cad3
    ecall

    li a7, 1 # Imprime el resultado
    mv a0, t1
    ecall
    
    li a7, 4 # Imprime el espacio
    la a0, esp
    ecall
    
    li a7, 4
    la a0, cad4
    ecall
    
    li a7, 1
    mv a0, t2
    ecall
    
    li a7, 10 # Salir
    ecall
    
