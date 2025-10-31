/*
A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais (numerador / denominador) e apresentar o resultado da operação. 
Cada operando ou operador é separado por um espaço em branco. 
A sequência de cada linha que contém a expressão a ser lida é: número, caractere, número, caractere, número, caractere, número. 
A resposta deverá ser apresentada e posteriormente simplificada. Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada. 
No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)

*/

function soma(N1,N2,D1,D2) {
    let numerador = N1 * D2 + N2 * D1
    let denominador = D1 * D2
    return [numerador, denominador]
}

function subtracao(N1, N2, D1, D2) {
    let numerador = N1 * D2 - N2 * D1
    let denominador = D1 * D2
    return [numerador, denominador]
}

function multiplicacao(N1, N2, D1, D2) {
    let numerador = N1 * N2
    let denominador = D1 * D2
    return [numerador, denominador]
}

function divisao(N1, N2, D1, D2) {
    let numerador = N1 * N2
    let denominador = D1 * D2
    return [numerador, denominador]
}

function menu() {
    return prompt(
        "Operações: \n" +
        "'+' - Soma.\n" +
        "'-' - Subtração.\n" +
        "'*' - Multiplicação.\n" +
        "'/' - Divisão.\n" +
        "0 - Sair\n"
    )
}

function simplificacao() {
    
}

function executar () {
    let opt = ""

    do {
        opt = menu()
        let = operacao

        switch (opt) {
            case "+":
                operacao = soma()
                break;
            case "-":
                operacao = subtracao()
                break;
                
            case "*":
                operacao = multiplicacao()
                break;
            
            case "/":
                operacao = divisao()
                break;
            
            default:
                console.log("opção inválida")
                break;
        }

    } while (opt !== "0");
}

exceutar()