class solucao:
    
    lista_de_ddd = [61, 71, 11, 21, 32, 19, 27, 31]
    ddd = int(input())
    
    if ddd in lista_de_ddd:
        if ddd == 61:
            print("Brasilia")
        elif ddd == 71:
            print("Salvador")
        elif ddd == 11:
            print("Sao Paulo")
        elif ddd == 21:
            print("Rio de Janeiro")
        elif ddd == 32:
            print("Juiz de Fora")
        elif ddd == 19:
            print("Campinas")
        elif ddd == 27:
            print("Vitoria")
        elif ddd == 31:
            print("Belo Horizonte")
    else:
        print("DDD nao cadastrado")      
    
    