def calcula_nota(nota):
    if nota < 0 or nota > 10:
        print("\nError, introduzca una nota valida")
    elif nota < 5:
        print("\nSuspenso")
    elif nota  < 7:
        print("\nAprobado")
    elif  nota < 9:
        print("\nNotable")
    else:
        print("\nSobresaliente")

nota =(float(input("\nIntroduce la nota: ")))
calcula_nota(nota)