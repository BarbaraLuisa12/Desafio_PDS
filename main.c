#include <stdio.h> 
#include <stdlib.h>
#include "pilha.h"

void main (){
    Pilha *topo = NULL;

    pilha_push(&topo, 1);
    pilha_push(&topo, 2);
    pilha_push(&topo, 3);

    //Imprime pilha
    Pilha *aux = topo;
    while (aux != NULL){
        printf("%d \n", aux -> valor);
        aux = aux -> proximo;
    }
}