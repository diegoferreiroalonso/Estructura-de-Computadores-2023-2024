
    .data
    
datos:
    .word 3, 7

cad1: .string "Introduzca el primer número: "
cad2: .string "Introduzca el segundo número: "
cad3: .string "Introduzca el tercer número: "
cad4: .string "Introduzca el cuarto número: "

    .globl main
    .text

main:

    li a7, 4
    li a0, cad1
    ecall
    
    li a7, 5
    ecall
    
    mv t0, a0
    
    li a7, 4
    li a0, cad2
    ecall
    
    li a7, 5
    ecall
    
    mv t1, a0
    
    li a7, 4
    li a0, cad3
    ecall
    
    li a7, 5
    ecall
    
    mv t2, a0

    li a7, 4
    li a0, cad4
    ecall
    
    li a7, 5
    ecall
    
    mv t3, a0
    
    add t4, t0, t1
    
    li a7, 1
    mv a0, t4
    ecall
    
    sub t5, t2, t3
    
    li a7, 1
    mv a0, t5
    ecall
    
    add a1, t0, t1
    add a2, t2, t3
    add a3, a2, a1
    
    li a7, 1
    mv a0, a3
    ecall
    
    sll a4, t0, t0
    
    li a7, 1
    mv a0, a4
    ecall
    
    la a0, datos
    lw a5, 0(t0)
    lw a6, 4(t6)
    
    rem a7, a6, a5
    
    li a7, 1
    mv a0, a7
    ecall

    li a7, 10
    ecall