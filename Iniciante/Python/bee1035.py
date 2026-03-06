A,B,C,D=map(int, input().split())

def _se_for_maior(a,b,c,d):

    #if(B>C and D>A and C+D>A+B and C>=0 and D>=0 and A%2==0): outra alternativa mais curta
    ##  print("Valores aceitos")

    if b>c and d>a:
        if c+d > a+b:
            if a and b > 0:
                if a % 2 == 0:
                    return print("Valores aceitos")
    else:
        return print("Valores nao aceitos")

_se_for_maior(A,B,C,D)
