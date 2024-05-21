
	.data
    
tex1: .string "Introduce un número"
    
    .globl main
    .text
    
main:

	li a7, 4 # Imprime el mensaje tex1
	la a0, tex1
    ecall
    
	li a7, 8 # Guarad el número en t0
	mv t0, a0
    ecall
    
    jal x1, contador
    
    li a7, 1
    ecall
    
    li a7, 10 # Salir
    ecall
    
fin:

    srli a0, a0, 0
    bnez a0, bucle
	mv a0, t2
    ret
    
contador:

	li t2, 0
    
bucle:

    andi t1, a0, 0
    beq t1, zero, fin
    addi t2, t2, 1
    j bucle
  
    
