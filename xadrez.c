#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno: Adeildo Belisário - Desafio Novato


int main() {
    // Nível Novato - Movimentação das Peças
    // Apresentação
    printf("Apresentação do projeto\n");
    printf("Movimentação das peças do Xadrez\n");
    
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    const int MovimentoTorre = 5;
    const MovimentoDama = 8;
    const MovimentoBispo = 5;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("\nMovimento do Bispo: 5 casas na diagonal para cima/direita \n");
    //Teste com while
    int i = 1;  //variável de controle

        while (i <= MovimentoBispo) 
        {
        printf("(Bispo) Casa %d: Cima, Direita\n", i);  
        i++;  // incremento para evitar Loop inf
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\nMovimento da Torre: 5 casas para a direita \n");
    //Teste com for

    for (int i = 1; i <= MovimentoTorre; i++)
    {
        printf("(Torre) %d casas: Direita\n", i); 
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento da Rainha: 8 casas para a esquerda \n");

    int D = 1;  // Variável de controle
    // Teste com Do-While
    do {
        printf("(Dama) %d casas: Esquerda\n", D);  // Exibe o número da casa e a direção
        D++;  // Incremento
    } while (D <= MovimentoDama);  // Continua executando "enquanto" D for menor ou igual a 8

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimento do Cavalo: duas casas para baixo e uma para a esquerda \n");

    const int MovVertical = 2; // definindo os 2 primeiros movimentos
    const int MovHorizontal = 1; //definindo o último movimento do salto

    for (int i = 1; i <= MovVertical; i++)
    {
        printf("(Cavalo) %d casas: Baixo\n", i);
    }
    int j = 1;
    while (j <= MovHorizontal)
    {
        printf("(Cavalo) %d casa: Esquerda\n", j);
        j++;
    }
    
        

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
