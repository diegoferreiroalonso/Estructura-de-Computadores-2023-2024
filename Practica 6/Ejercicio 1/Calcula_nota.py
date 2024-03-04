def calcula_nota(nota):
    if nota < 0 or nota > 10:
        input("\nError, introduzca una nota valida")
    elif nota < 5:
        input("\nSuspenso")
    elif nota  < 7:
        input("\nAprobado")
    elif  nota < 9:
        input("\nNotable")
    else:
        input("\nSobresaliente")
    
def main():
    nota =(float(input("\nIntroduce la nota: ")))
    calcula_nota(nota)
    
if __name__ == "__main__":
    main()