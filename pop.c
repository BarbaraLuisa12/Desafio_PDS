#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int pilha_pop(Pilha **topo){
    if(*topo == NULL){
        printf("NULL\n");
        return -1;
    }

    int valor_removido = (*topo) -> valor;
    Pilha *proximo = (*topo) -> proximo;    //Armazena o próximo elemento
    free(*topo);                            //Libera memória do topo original
    *topo = proximo;                         //Atualiza o topo para o próximo elemento

    return valor_removido;
}