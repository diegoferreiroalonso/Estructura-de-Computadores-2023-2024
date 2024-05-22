
	.data
    
tex1: .string "Introduce un número:"
tex2: .string "Error, introduzca un número positivo"
esp: .string "		"
    
    .globl main
    .text

main:

	li a7, 4 
    la a0, tex1
    ecall
    
    li a7, 4
    la a0, esp
    ecall
    
    li a7, 5
    mv t0, a0
    ecall
    
funct:

    li t1, 0
    
comprobacion:

	blt t0, t1, error	

	jal x1, divisores

	li a7, 10 # Salir
    ecall

error: 

	li a7, 4
    la a0, tex2
    ecall
    
    li a7, 5
    mv t3, a0
    ecall
    
    blt t3, t1, error
    ecall
    
divisores:

	li a7, 10