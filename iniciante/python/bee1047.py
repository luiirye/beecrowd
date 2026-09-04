class Solucao:
    h1, m1, h2, m2 = map(int, input().split())
 
    inicial = h1 * 60 + m1 
    final = h2 * 60 + m2
    
    if(final <= inicial):
        final += 24 * 60
        
    print(f'O JOGO DUROU {(final - inicial) // 60} HORA(S) E {(final - inicial) % 60} MINUTO(S)')