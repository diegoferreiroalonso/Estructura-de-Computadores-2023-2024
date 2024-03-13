class Alumno:
    
    def __init__(self, nombre, nota):
        
        self.nombre = str(input("\nIntroduzca un nombre: "))
        
        self.nota = int(input("\nIntroduzca una nota: "))
        
    def mostrarNombre(self):
        
        print("\nEl nombre es: ")
        print(self.nombre)
        
    def mostrarNota(self):
            
        print("\nLa nota es: ")
        print(self.nota)
        
    def CalculaNotaLiteral(self):
        if self < 0 or self > 10:
            print("\nError, introduzca una nota valida")
        elif self < 5:
            print("\nSuspenso")
        elif self  < 7:
            print("\nAprobado")
        elif  self < 9:
            print("\nNotable")
        else:
            print("\nSobresaliente")
            
    CalculaNotaLiteral(self)