class Solucao:
    ##moeda
    rombus = float(input())
    
    if(rombus <= 2000.00):
        print("Isento")
        
    elif(rombus >= 2000.01 and rombus <= 3000.00 ):
        calculo = (rombus - 2000.00) * 8/100
        print(f'R$ {calculo:.2f}')
        
    elif(rombus >= 3000.01 and rombus <= 4500.00):
        calculo = (rombus - 3000.00) * 18/100 + 80
        print(f'R$ {calculo:.2f}')
    
    elif(rombus > 4500.00):
        calculo = (rombus - 4500.00) * 28/100 + 350
        print(f'R$ {calculo:.2f}')