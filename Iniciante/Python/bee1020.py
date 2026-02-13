idade = int(input())
X = idade // 365
idade %= 365
Y = idade // 30
idade %= 30
Z = idade // 1
idade %= 1

print(f"{X} ano(s)\n{Y} mes(es)\n{Z} dia(s)")
