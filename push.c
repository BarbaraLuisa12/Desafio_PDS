#include <stdio.h> 
#include <stdlib.h>
#include "pilha.h"

void pilha_push (Pilha **topo, int valor){
    Pilha *novo_valor = malloc(sizeof(Pilha));          //Aloca espaço de memória para adicionar novo valor
    novo_valor -> valor = valor;                        //Armazena o valor no espaço de memória alocado
    novo_valor -> proximo = *topo;                      //Próximo recebe o antigo topo da pilha
    *topo = novo_valor;                                  //Atualiza o topo da pilha
}

