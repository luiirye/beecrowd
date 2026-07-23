class Solucao():
    
    x = int(input()) # variável utilizada

    if x % 2 == 0:
        x += 1
        for i in range(1, 6, 1):
            print(x)
            x += 2
    elif x % 2 != 0:
        for i in range(1, 6, 1):
            print(x)
            x += 2