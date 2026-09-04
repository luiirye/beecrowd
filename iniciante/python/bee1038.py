## criando dicionário para o menu
## Estrutura: código: {informações do produto}
produtos = {
    1: {"item_nome":"cachoro_quente", "preco": 4.00},
    2: {"item_nome":"x_salada", "preco": 4.50},
    3: {"item_nome":"x_bacon", "preco": 5.00},
    4: {"item_nome":"torrada_simples" , "preco":2.00},
    5: {"item_nome":"refrigerante" , "preco":1.50}
}

codigo, quantidade = map(int,input().split())

menu = produtos[codigo]
total = quantidade * menu["preco"]
print(f'Total: R$ {total:.2f}')

## aceito
