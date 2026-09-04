# Quebra a linha gerando uma lista
sequencia1 = input().split()
sequencia2 = input().split()

# Como os inputs são guardados como Strings, é preciso fazer a conversão de tipos
peca1 = int(sequencia1[0])
qntdPeca1 = int(sequencia1[1])
valorPeca1 = float(sequencia1[2])

peca2 = int(sequencia2[0])
qntdPeca2 = int(sequencia2[1])
valorPeca2 = float(sequencia2[2])

total_pecas = ((qntdPeca1 * valorPeca1) + (qntdPeca2 * valorPeca2))

print('VALOR A PAGAR: R$ ''{:.2f}'.format(total_pecas))