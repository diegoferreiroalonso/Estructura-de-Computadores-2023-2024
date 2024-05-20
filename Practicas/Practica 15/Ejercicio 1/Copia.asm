
	.data
    
cad1: .zero 100
cad2: .zero 100
tex1: .string "Introduce una cadena: "
    
    .globl main
    .text
    
main:

	li a7, 4 # Imprime el mensaje
	la a0, tex1
    ecall
    
    li a7, 8 # Escribe la cadena
    la a2, cad1
    la a0, cad1
    li a1, 100
    ecall
    
    jal x1, copia # Llamada a la función
    
fin:

	li a7, 10 # Salir
    ecall
    
copia:

	la a2, cad1
    la a3, cad2
    mv a3, a2
    li t1, 97
    lb t2, 0(a2)
    beq t1, t2, contador
    bne t2, zero, copia
    ret

contador:

	addi t2, t2, 1
	li t0, 0 #Inicialización del contador
    addi t0, t0, 1 # Contador
    j copia
    
