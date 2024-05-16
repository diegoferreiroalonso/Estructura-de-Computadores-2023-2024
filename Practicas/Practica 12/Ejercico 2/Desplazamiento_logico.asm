
    .text
    .globl main

main:

    li t0, 64
    li t1, 2

    srl t0, t1, t2

    li a0, 17
    li a1, 3

    rem t3, a0, a1

    li a7, 10
    ecalls