class Solucao:
    n1 = float(input())
    n2 = float(input())
    n3 = float(input())
    n4 = float(input())
    n5 = float(input())
    n6 = float(input())

    lista = [n1,n2,n3,n4,n5,n6]
    cont = 0
    soma = 0

    for i in lista:
        if i > 0:
            cont+=1
            soma+=i

    media = soma / cont

    print(f'{cont} valores positivos')
    print(f'{media:.1f}')