import math

A,B,C=list(map(float, input().split()))

def raizes(a,b,c):

    delta = b**2-4*a*c

    if delta < 0:
        return print(f'Impossivel calcular')
    elif a == 0:
        return print(f'Impossivel calcular')
    else:
        r1 = (-b + math.sqrt(delta))/ (2*a)
        r2 = (-b - math.sqrt(delta))/ (2*a)
        return print(f'R1 = {r1:.5f}\nR2 = {r2:.5f}')

raizes(A,B,C)