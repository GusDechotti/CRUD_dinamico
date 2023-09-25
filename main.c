#include<stdio.h>
#include<stdlib.h>
#include "headers.h"

int main (){
    LISTA *lista = criarLista();
    int op;
    do{
        printf(" -- MANTER CLIENTE -- AEROPORTO DE TOLEDO --\n");
        printf("\nLista de clientes:\n");
        exibe(lista);
        printf("O que voce deseja fazer?\n 1- Cadastrar novo cliente\n 2- Comprar passagem com conta do referido cliente\n 3- Editar informacoes de cliente\n 4- Excluir cliente\n 5- Exibe mais informacoes do cliente\n 0- Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                insere(lista);
                break;
            case 2:
                compra(lista);
                break;
            case 3:
                edita(lista);
                break;
            case 4:
                removes(lista);
                break;
            case 5:
                batata(lista);
                break;
            case 0:
                libera(lista);
                break;
        }
        system("cls");
    }while(op != 0);
    libera(lista);
    free(lista);
}

