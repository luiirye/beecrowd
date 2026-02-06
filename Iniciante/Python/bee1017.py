horasGastas = int(input())
velocidade = int(input())

calculoHoras = horasGastas * 60
velocidadeMedia = velocidade / 60
litros = calculoHoras * velocidadeMedia  / 12

print('{:.3f}'.format(litros))

