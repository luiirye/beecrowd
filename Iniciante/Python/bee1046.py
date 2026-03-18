h_inicial, h_final = map(int, input().split())

if(h_final <= h_inicial):
    h_final += 24

print(f'O JOGO DUROU {h_final - h_inicial} HORA(S)')