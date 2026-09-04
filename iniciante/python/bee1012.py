valores = input().split()

A = float(valores[0])
B = float(valores[1])
C = float(valores[2])

PI = 3.14159

trianguloRetangulo = A * C / 2
circulo = (PI * (C * C))
trapezio = (((A + B) *C) / 2)
quadrado = (B * B)
retangulo = (A * B)

print('TRIANGULO: ' '{:.3f}'.format(trianguloRetangulo))
print('CIRCULO: ' '{:.3f}'.format(circulo))
print('TRAPEZIO: ' '{:.3f}'.format(trapezio))
print('QUADRADO: ' '{:.3f}'.format(quadrado))
print('RETANGULO: ' '{:.3f}'.format(retangulo))
