# Soluções Beecrowd

Repositório de estudos com soluções de problemas da plataforma Beecrowd em diferentes linguagens.

## Organização

As soluções são organizadas primeiro pela categoria do problema e depois pela linguagem:

```text
.
├── iniciante/
│   ├── cpp/
│   ├── javascript/
│   └── python/
└── estruturas/
    └── python/
```

Cada arquivo usa o identificador numérico do problema no formato `beeNNNN.ext`. Quando há mais de uma implementação, a solução principal mantém o nome padrão e a outra recebe um sufixo descritivo, como `bee1035_alternativa.py`.

## Executando as soluções

Substitua `bee1000` pelo exercício desejado nos exemplos abaixo.

### Python

```bash
python3 iniciante/python/bee1000.py
```

### JavaScript

```bash
node iniciante/javascript/bee1000.js
```

### C++

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -Wpedantic iniciante/cpp/bee1000.cpp -o build/bee1000
./build/bee1000
```

No VS Code, a tarefa padrão compila o arquivo C++ aberto e salva o executável no diretório ignorado `build/`.

## Convenções

- Diretórios usam letras minúsculas e nomes sem espaços.
- Soluções usam o padrão `beeNNNN.ext`.
- Implementações adicionais recebem um sufixo descritivo, como `_alternativa` ou `_estudo`.
- Executáveis, caches e outros artefatos gerados não são versionados.
