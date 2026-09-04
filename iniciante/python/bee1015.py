# Biblioteca para utilizar a função "math" e usar para calcular uma raiz.
import math

r1 = input().split()
r2 = input().split()

x1 = float(r1[0])
y1 = float(r1[1])
x2 = float(r2[0])
y2 = float(r2[1])

#Fórmula da distância das raízes
distancia = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))
raiz = math.sqrt(distancia)

print('{:.4f}'.format(raiz))