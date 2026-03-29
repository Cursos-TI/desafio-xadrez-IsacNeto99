#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
        int bispo, torre, rainha, cavalo;
        int movimento;

    //Interação usuário-máquina
    //Sugestão: No vídeo o professor pede para "brincarmos" e tentarmos fazer de forma diferente, estarei tentando, k.
        printf("----= *~~~~* MOVIMENTOS DE XADREZ *~~~~* =----\n\n");

        printf("[!] - Lembre-se que um tabuleiro de xadrez tem uma grade de 8x8, portanto, não coloque um número maior que 8 movimentos por peça!\n\n");

        do{
            printf("Insira a quantidade de movimentos que a peça (BISPO) poderá mover-se no tabuleiro:\n");
            scanf("%d", &bispo);

                if (bispo < 1 || bispo > 8){
                    printf("O valor máximo a ser digitado é de: 8 movimentos.\n");
                }

            } while (bispo < 1 || bispo > 8);

        do{
            printf("Insira a quantidade de movimentos que a peça (TORRE) poderá mover-se no tabuleiro:\n");
            scanf("%d", &torre);

                if (torre < 1 || torre > 8){
                    printf("O valor máximo a ser digitado é de: 8 movimentos.\n");
                }

            } while (torre < 1 || torre > 8);

        do{
            printf("Insira a quantidade de movimentos que a peça (RAINHA) poderá mover-se no tabuleiro:\n");
            scanf("%d", &rainha);

                if (rainha < 1 || rainha > 8){
                    printf("O valor máximo a ser digitado é de: 8 movimentos.\n");
                }

            } while (rainha < 1 || rainha > 8);

        do {
            printf("Insira a direção que você deseja que a peça (CAVALO) poderá mover-se no tabuleiro:\n");
            printf("(1) - Cima, cima, direita\n");
            printf("(2) - Cima, cima, baixo\n");
            printf("(3) - Baixo, baixo, direita\n");
            printf("(4) - Baixo, baixo, esquerda\n");
            printf("(5) - Direita, direita, cima\n");
            printf("(6) - Direita, direita, baixo\n");
            printf("(7) - Esquerda, esquerda, cima\n");
            printf("(8) - Esquerda, esquerda, baixo\n");
            scanf("%d", &cavalo);

                if (cavalo <1 || cavalo > 8){
                    printf("Selecione uma opção válida!\n");
                }

            } while (cavalo < 1 || cavalo > 8);
        

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
            for (int i = 0; i < bispo; i++) {
                printf("BISPO: Diagonal.\n");
            }
            
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

        int i = 1;

            while (i <= torre){
                printf("TORRE: Direita.\n");
                i++;
            }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

        do {
            printf("RAINHA: Esquerda.\n");
            rainha--;
        } while (rainha >= 1);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

        movimento = 1;
        while (movimento--){
            switch (cavalo){
            case 1:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Cima\n");
                }
                printf("Direita.\n");
                break;
            case 2:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Cima\n");
                }
                printf("Baixo.\n");
                break;
            case 3:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Baixo\n");
                }
                printf("Direita.\n");
                break;
            case 4:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Baixo\n");
                }
                printf("Esquerda.\n");
                break;
            case 5:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Direita\n");
                }
                printf("Cima.\n");
                break;
            case 6:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Direta\n");
                }
                printf("Baixo.\n");
                break;
            case 7:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Esquerda\n");
                }
                printf("Cima.\n");
                break;
            case 8:
                printf("CAVALO:\n");
                for (int i = 0; i < 2; i++) {
                    printf("Esquerda\n");
                }
                printf("Baixo.\n");
                break;
            }
        }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
