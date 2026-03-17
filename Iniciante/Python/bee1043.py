A, B, C = map(float, input().split())

#Cálculo perímetro
p = A+B+C
#Cálculo Trapézio
t = (A + B) * C / 2

# verificando desigualdade
if A + B > C and A + C > B and B + C > A:
    print(f'Perimetro = {p:.1f}')
else:
    print(f'Area = {t:.1f}')
    
    

    