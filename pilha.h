typedef struct Pilha {
    int valor;
    struct Pilha *proximo;
    struct Pilha *topo;
}Pilha;

/**
* Insere elementos em uma pilha.
*@param valor Valor a ser inserido na pilha.
*@param topo Ponteiro que aponta para o topo da pilha. 
**/
void pilha_push (Pilha **topo, int valor);



