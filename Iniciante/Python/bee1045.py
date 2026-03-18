a, b, c = map(float, input().split())

lista = [a, b, c]
lista.sort(reverse=True)

# recebe os valores já ordenados
a,b,c = lista

if(a >= b + c):
    print("NAO FORMA TRIANGULO")
else:
    if(a * a == b * b + c * c):
        print("TRIANGULO RETANGULO")
    elif(a * a > b * b + c * c):
        print("TRIANGULO OBTUSANGULO")
    elif(a * a < b * b + c * c):
        print("TRIANGULO ACUTANGULO")

    if(a == b == c):
        print("TRIANGULO EQUILATERO")
    elif(a == b or a == c or b == c):
        print("TRIANGULO ISOSCELES")