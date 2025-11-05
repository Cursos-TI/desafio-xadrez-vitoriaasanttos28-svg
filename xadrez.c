#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int i = 1;
int j = 1;
int k = 1;
int movimento=1;// para comtrolar o movimento em L

//menu

    // Implementação de Movimentação do Bispo
    
while (i <= 5){
    printf("bispo: cima,direita\n");
   i++;
}
    // Implementação de Movimentação da Torre
    
for (int j = 1; j <= 5; j++){

 printf("torre: Direita\n");
    }
    // Implementação de Movimentação da Rainha
    
    //bloco de codigo
    do {
        printf("rainha :Esquerda\n");
        k++;
}while (k <= 8);

printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
while(movimento--);
{
 for(int i= 1; i <= 2 ; i++){
  printf("cima\n");// imprime "cima" duas vezes
 }
 printf("direita\n");
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
