class Solucao:
    
    # Primeiro dia e horário
    string_Dia1 = input().split()
    string_Hora1 = input().split()
    # Segundo dia e horário
    string_Dia2 = input().split()
    string_Hora2 = input().split()
    
    W1, W2 = int(string_Dia1[1]), int(string_Dia2[1])
    Y1, X1, Z1 = int(string_Hora1[0]), int(string_Hora1[2]), int(string_Hora1[4])
    # split separa todo o conteúdo, os guardando -> ["Dia", "01"] -> [0, 1] 
    Y2, X2, Z2 = int(string_Hora2[0]), int(string_Hora2[2]), int(string_Hora2[4])
    # split separa todo o conteúdo, os guardando -> ["01", ":", "01", ":", "01"] -> [0, 1, 2, 3, 4]
    
    # segundos em dias, horas, minutos
    minutos_seg = 60
    hora_seg = 3600
    dia_seg = 86400
    
    d1 = Z1 + (X1 * minutos_seg) + (Y1 * hora_seg) + (W1 * dia_seg)  
    d2 = Z2 + (X2 * minutos_seg) + (Y2 * hora_seg) + (W2 * dia_seg)
    
    if (d1 < d2):
        tempo = d2 - d1
        W = int(tempo/dia_seg)
        tempo = tempo%dia_seg
        X = int(tempo/hora_seg)
        tempo = tempo%hora_seg
        Y = int(tempo/minutos_seg)
        tempo = tempo%minutos_seg
        Z = tempo
    elif (d1 > d2):
        tempo = d1 = d2
        W = int(tempo/dia_seg)
        tempo = tempo%dia_seg
        X = int(tempo/hora_seg)
        tempo = tempo%hora_seg
        Y = int(tempo/minutos_seg)
        tempo = tempo%minutos_seg
        Z = tempo
    else:
        print("Horários iguais")
        tempo = 0
        
    print("%d dia(s)" %W)
    print("%d hora(s)" %X)
    print("%d minuto(s)" %Y)
    print("%d segundo(s)" %Z)