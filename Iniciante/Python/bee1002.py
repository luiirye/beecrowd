PI = 3.14159
raio = float(input())
area = PI * (raio * raio)
# Usei .format para limitar a resposta de "area" para 4 casas decimais
print( 'A=''{:.4f}'.format(area))