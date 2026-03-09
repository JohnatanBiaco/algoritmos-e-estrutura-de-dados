#include <stdio.h>
#include <stdlib.h>

/* 
uma lista ligada é uma estrutura linear composta por nós
cada nó possui duas partes fundamentais:
- Campo de Dados: Armazena a informação (ex: um numero inteiro)
- Campo de Ligação (ponteiro): Armazena o endereo de memoria do proximo elemento da lista

Para representar um nó, utilizamos uma estrutura heterogenea:
*/
struct No{
    int valor;
    struct No *proximo;
};
/*
Diferente da alocação estatica, utilizamos a função malloc para solicitar memoria durante a execução
struct No *novoNo = (struct No*) malloc(sizeof(struct No));
*/
int main(){
    struct No *novoNo = (struct No*) malloc(sizeof(struct No));
    novoNo->valor=42;

    printf("Valor do no: %d\n", novoNo->valor);
    return 0;
}   
/*
Elementos de controle
Head: é o ponteiro que marca o inicio da lista, se head == null, a lista esta vazia
Null: é o valor especial atribuido ao campo de ligação do ultimo nó, indicando que nao tera mais sucessor

Inserção no inicio: basta criar o novo nó, fazelo-apontar para o atual head, e atualizar o head para este só novo vó
Custo computacional: diferente dos vetores, não precisamos "empurrar" ninguem, 
apenas alteramos os endeços (ponteiros)

*/