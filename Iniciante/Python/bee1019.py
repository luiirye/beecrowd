N = int(input()) #segundos
# Variáveis para conversão Divisão
horas = N // 3600
N %= 3600 #guarda o resto da divisão por 3600
minutos = N // 60 # Divide o resultado novo em N por 60
N %= 60 # Guarda o resto da divisão anterior por 60.

print(f"{horas}:{minutos}:{N}")


