/*------------ PDS II - ATIVIDADE 05 - DESAFIO ------------

Integrantes do grupo: 
Bárbara Luisa Crispim Ribeiro
Gabriel Franklin Lopes de Oliveira
Guido Piancastelli Ramos
Gustavo Dornela Constantino
Marcus Vinícius Da Cruz Maia

*/

#include <stdio.h> 
#include <stdlib.h>
#include "pilha.h"

void imprime_pilha (Pilha *topo){
    Pilha *aux = topo;
    while (aux != NULL){
        printf("%d \n", aux -> valor);
        aux = aux -> proximo;
    }
}

int main (){
    Pilha *topo = NULL;

    int i; 
    char cond = 'S';

    printf("------------ ADICIONANDO VALORES EM UMA PILHA ------------\n");

    while(cond == 'S' || cond == 's'){
    printf("Informe um valor inteiro a ser adicionado na pilha: \n");
    scanf("%d", &i);
    pilha_push(&topo, i); 

    printf("Pilha apos a operacao push:\n");
    imprime_pilha(topo);

    printf("\nDeseja adicionar mais algum valor na pilha? Se sim, digite S\n");
    scanf(" %c", &cond);

    while ((getchar()) != '\n');
}

    printf("------------ REMOVENDO VALORES DO TOPO DA PILHA------------\n");

    printf("Deseja remover um valor de topo da pilha? Se sim, digite S\n");
    scanf(" %c", &cond);
    while(cond == 'S' || cond == 's'){
        int valor_removido = pilha_pop(&topo);
        if(valor_removido == -1){
            printf("NULL\n");
        }else

        printf("O valor removido da pilha foi: %d", valor_removido);

        printf("\nPilha apos a operacao pop:\n");
        imprime_pilha(topo);

         while ((getchar()) != '\n');

        printf("Deseja remover mais um valor de topo da pilha? Se sim, digite S\n");
        scanf(" %c", &cond);
    }
    return 0;
}