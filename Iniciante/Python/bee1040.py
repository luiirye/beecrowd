N1, N2, N3, N4 = map(float, input().split())

calculo_media = (N1*2 + N2*3 + N3*4 + N4*1) / 10.0


if (calculo_media >= 7.0):
    print(f'Media: {calculo_media:.1f}')
    print("Aluno aprovado.")

elif(calculo_media <= 5.0):
    print(f'Media: {calculo_media:.1f}')
    print("Aluno reprovado.")

elif(calculo_media >= 5.0 and calculo_media <= 6.9):
    print(f'Media: {calculo_media:.1f}')
    print("Aluno em exame.")
    
    if(calculo_media >= 5.0 and calculo_media <= 6.9):
        while True:
            nota_exame = float(input())
            media_exame = (calculo_media + nota_exame)/2
            print(f'Nota do exame: {nota_exame:.1f}')
            
            if(media_exame >= 5.0):
                print("Aluno aprovado.")
                print(f'Media final: {media_exame:.1f}')
                break
            
            else:
                print(f'Media final: {media_exame:.1f}')
                print("Aluno reprovado.")
                break
                