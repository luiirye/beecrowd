class Solucao:
    
    n1 = int(input()) 
    n2 = int(input())
    n3 = int(input())
    n4 = int(input())
    n5 = int(input())
    
    lista_int = [n1, n2, n3, n4, n5]
    
    positivos = 0
    negativos = 0
    pares = 0
    impares = 0
    
    for i in lista_int:
        if (i > 0):
            positivos += 1
        if (i < 0):
            negativos += 1
        if (i % 2 == 0):
            pares += 1
        if (i % 2 == 1):
            impares += 1
            
    print(
        f'{pares} valor(es) par(es)\n{impares} valor(es) impar(es)\n{positivos} valor(es) positivo(s)\n{negativos} valor(es) negativo(s)'
    )