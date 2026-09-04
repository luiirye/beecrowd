# EOF -> End of File (Fim do Arquivo)

import math
import sys

for linha in sys.stdin:

# Lê os dados
    R1, X1, Y1, R2, X2, Y2 = map(int, linha.split())

# Calcula distância entre os centros
    distancia = math.sqrt((X2 - X1)**2 + (Y2 - Y1)**2)

# Verifica se a flor está completamente dentro
    if distancia + R2 <= R1:
        print("RICO")
    else:
        print("MORTO")
