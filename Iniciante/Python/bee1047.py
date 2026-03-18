# Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. 
# A seguir calcule a duração do jogo.

hInicial, mInicial, hFinal, mFinal = map(int, input().split())
if(hFinal <= hInicial):
    hFinal += 24
if(mFinal <= mInicial):
    hFinal += 1
print(f'O JOGO DUROU {hFinal - hInicial} HORA(S) E {mFinal - mInicial} MINUTOS(S)')