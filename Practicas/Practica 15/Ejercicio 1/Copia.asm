
	.data
    
cad1: .zero 100
cad2: .zero 100
tex1: .string "Introduce una cadena: "
let: .byte 'a'
    
    .globl main
    .text
    
main:

	li a7, 4 # Imprime el mensaje
	la a0, tex1
    ecall
    
    li a7, 8 # Escribe la cadena origen
    la a0, cad1
    li a1, 100
    ecall
    
    la a2, cad2
    
    jal x1, copia # Llamada a la función
    
    li a7, 1
    ecall
    
    li a7, 10
    ecall
    
fin:

	mv a0, t5
    ret
    
copia:

	li t0, 0
    li t5, 0
    
bucle:

    lb t3, 0(a0)
	la a4, let
	lb t4, 0(a4)
    beq t3, zero, fin
    sb t3, 0(a2)
    addi a0, a0, 1
    addi a2, a2, 1
    addi t0, t0, 1
	beq t3, t4, contador
    j bucle

contador:

	addi t5, t5, 1
    j bucle