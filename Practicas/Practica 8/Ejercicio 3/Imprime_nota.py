class Alumno: # Define la clase llamada "Alumno"
    
    def __init__(self, nombre, nota): # Define una nueva función llamada "__init__"
        
        self.nombre = nombre # Hace referencia al objeto nombre
        
        self.nota = nota # Hace referencia al objeto nota
        
    def mostrarNombre(self): # Define una nueva función llamada "mostrarNombre"
        
        print("\nEl nombre es: ") # Imprime el mensaje en la consola
        print(self.nombre) # Imprime el nombre en la consola
        
    def mostrarNota(self): # Define una nueva función llamada "mostrarNota"
            
        print("\nLa nota es: ") # Imprime el mensaje en la consola
        print(self.nota) # Imprime la nota en la consola
        
    def CalculaNotaLiteral(self): # Define una nueva función llamada "CalculaNotaLiteral"
        if self.nota > 10 or self.nota < 0: # Crea el condicional if (si) que ejecuta el codigo si se cumple la condición, que en este caso es que sea menor que 0 y mayor que 10, ya que se trata del mensaje de error
            print("\nNota no valida") # Imprime el mensaje en la consola
        elif self.nota < 5: # Otra condición, la cual se cumple si la nota es menor que 5
            print("\nSuspenso") # Imprime el mensaje por pantalla
        elif self.nota < 7: # Otra condición, la cual se cumple si la nota es menor que 7
            print("\nAprobado") # Imprime el mensaje por pantalla
        elif self.nota < 9: # Otra condición, la cual se cumple si la nota es menor que 9
            print("\nNotable") # Imprime el mensaje por pantalla
        elif self.nota < 11: # Otra condición, la cual se cumple si la nota es menor que 11 
            print("\nSobresaliente") # Imprime el mensaje por pantalla
            
nombre = input("\nIntroduzca un nombre: \n") # Imprime el mensaje en la consola y recoge los datos del usuario, en este caso texto
nota = float(input("\nIntroduzca una nota: \n")) # Imrpime el mensaje en la consola y recoge los datos del usuario, en este caso números flotantes (con comas)

alumno = Alumno(nombre, nota) # Llama al método "__init__" de la clase "Alumno" con dos argumentos

alumno.mostrarNombre() # Llamada a la función "mostrarNombre"
alumno.mostrarNota() # Llamada a la función "mostrarNota"
alumno.CalculaNotaLiteral() # Llamada a la función "CalculoNotaLiteral"