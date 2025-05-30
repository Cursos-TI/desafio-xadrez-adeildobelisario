#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno: Adeildo Belisário - Desafio Novato/Aventureiro/Mestre

// Os recursivos

void MovimTorre(int casas) {
    if (casas == 0) return;
    
    MovimTorre(casas - 1);
    printf("%d casa para a Direita\n", casas);
}

void MovimBispo(int Vertical, int Horizontal) {
    if (Vertical == 0 || Horizontal == 0) return;
        MovimBispo(Vertical - 1, Horizontal - 1);
        printf("%d casas para Cima e para a Direita\n", Vertical);
}

void MovimDama(int casas) {
    if (casas == 0) return;
    
    MovimDama (casas - 1);
    printf("%d casas para esquerda\n", casas);
}

void MovimCavalo(){
    // printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (int i = 1; i <= 2; i++)
    {
        if (i == 0)
        {
            printf("1 casa para cima\n");
        }
        for (int j = 0; j < 3 ; j++)
        {
            if (!(i == 1 && j == 0)){
                continue;
            }
            printf("2 casas para cima\n");
            printf("1 casa para direita\n");
            break;
        }
        
    }
    
}


int main() {
    // Nível Mestre - Movimentação das Peças
    // Apresentação
    printf("Apresentação do projeto\n");
    printf("Movimentação das peças do Xadrez\n");
    
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // o número de casas será declarado na chamada do recursivo
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("\nMovimento do Bispo: 5 casas na diagonal para cima/direita \n");
    MovimBispo(5, 5);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\nMovimento da Torre: 7 casas para a direita \n");
    MovimTorre(7);

    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento da Dama: 8 casas para a esquerda \n");
    MovimDama(8);


    // Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    

    printf("\nMovimento do Cavalo: 2 casas para cima e 1 para a direita \n");

    const int MovVertical = 2; // definindo os 2 primeiros movimentos
    const int MovHorizontal = 1; //definindo o último movimento do salto
    MovimCavalo(2, 1);
    
    
        

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
