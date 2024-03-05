import math

def factorial(n):
    res = math.factorial(n)
    print("\nEl factorial de",n,"es :",res)

def main():
    
    n = int(input("\nIntroduce un número: "))
    
    factorial(n)
    
if __name__ == "__main__":
    main()