valores = input().split()
a = int(valores[0])
b = int(valores[1])
c = int(valores[2])

maiorAB = int(((a + b + abs(a-b)) / 2))

if maiorAB > c :
    print(maiorAB, 'eh o maior')

else :
    print(c, 'eh o maior')
