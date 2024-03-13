class Alumno:
    
    def __init__(self, nombre, nota):
        
        self.nombre = nombre
        
        self.nota = nota
        
    def mostrarNombre(self):
        
        print("\nEl nombre es: ")
        print(self.nombre)
        
    def mostrarNota(self):
            
        print("\nLa nota es: ")
        print(self.nota)
        
    def CalculaNotaLiteral(self):
        if self.nota > 10 or self.nota < 0:
            print("\nNota no valida")
        if self.nota < 5:
            print("\nSuspenso")
        elif self.nota < 7:
            print("\nAprobado")
        elif self.nota < 9:
            print("\nNotable")
        elif self.nota < 11:
            print("\nSobresaliente")
            
nombre = input("\nIntroduzca un nombre: ")
nota = float(input("\nIntroduzca una nota: "))
alumno = Alumno(nombre, nota)        

alumno.mostrarNombre()
alumno.mostrarNota()
alumno.CalculaNotaLiteral()