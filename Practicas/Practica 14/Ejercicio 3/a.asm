
	.data
    
datos1:
	.half 4, 7, 2
    .align 2
    .word 1, -5
    .byte 4
    .align 1
    .half 3
    .align 2
    .word -3
    .zero 2
    
texto1: .string "El resultado de sumar 3 (word) y 1 (half) es: "
    
    .globl main
    .text
  
main:

	la a0, datos1 # Carga los datos
    lw t1, 8(a0)
    lh t2, 18(a0)
    
    add t3, t2, t1 # Suma
    
    sh t3, 24(a0) # Guarda el valor en memoria
    
    li a7, 1 # Imprime el resultado
    mv a0, t3
    ecall
    
    la a0, datos1
    lw t4, 12(a0) # Carga los datos
    lw t5, 20(a0)
    
    add t6, t4, t5 # Suma
    
    sh t6, 4 (a0)
    
    li a7, 1 # Imprime
    mv a0, t6
    ecall
    
    li a7, 10 # Salir
    ecall