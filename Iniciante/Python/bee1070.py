class Solucao:
    x = int(input())
    
    # imprimir valores ímpares a partir de x, 6 vezes no máximo.
    
    for i in range(x, x + 1):
        if i % 2 == 1:
            print(i)