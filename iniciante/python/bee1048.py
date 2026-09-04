class Solucao():
    
    valor = float(input())
    
    if(valor <= 400.00):
        percentual = ((valor * 15) / 100)
        total = valor + percentual
        print(
            f'Novo salario: {total:.2f}\nReajuste ganho: {percentual:.2f}\nEm percentual: 15 %'
        )

    elif(valor > 400.01 and valor <= 800.00):
        percentual = ((valor * 12) / 100)
        total = valor + percentual
        print(
            f'Novo salario: {total:.2f}\nReajuste ganho: {percentual:.2f}\nEm percentual: 12 %'
        )

    elif(valor > 800.00 and valor <= 1200.00):
        percentual = ((valor * 10) / 100)
        total = valor + percentual
        print(
            f'Novo salario: {total:.2f}\nReajuste ganho: {percentual:.2f}\nEm percentual: 10 %'
        )

    elif(valor > 1200.00 and valor <= 2000.00):
        percentual = ((valor * 7) / 100)
        total = valor + percentual
        print(
            f'Novo salario: {total:.2f}\nReajuste ganho: {percentual:.2f}\nEm percentual: 7 %'
        )

    elif(valor > 2000.00):
        percentual = ((valor * 4) / 100)
        total = valor + percentual
        print(
            f'Novo salario: {total:.2f}\nReajuste ganho: {percentual:.2f}\nEm percentual: 4 %'
        )    