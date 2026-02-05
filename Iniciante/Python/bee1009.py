nome = input()
sal = float(input())
total_vendas = float(input())
comissao = ((total_vendas * 15) / 100)
total = (comissao + sal)

print("TOTAL = R$ "'{:.2f}'.format(total))
 