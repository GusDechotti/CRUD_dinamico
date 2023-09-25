#include<stdio.h>
#include<stdlib.h>
#include "headers.h"
//exibir lista de clientes
void exibe(LISTA* lista){
	if ( (*lista) == NULL){
		printf("LISTA VAZIA\n");
	}else{
		node *tmp;// no temporario
		tmp = (*lista);
		while (tmp != NULL){
			printf("%i - %s\n", tmp->ID, tmp->nome);
			tmp = tmp->prox;
		}
	}
printf("\n");
}
//insere novo cliente
void insere (LISTA* lista){
	node *novo = (node*) malloc (sizeof(node));//declara e aloca
	if(novo == NULL){
		printf("Erro na alocacao");
		exit(0);
	}
	printf("Digite o nome do novo cliente: ");
	fflush(stdin);
    gets(&novo->nome);
    printf("Digite o telefone do novo cliente: ");
    fflush(stdin);
    gets(&novo->telefone);
    printf("Digite o RG do novo cliente: ");
    fflush(stdin);
    gets(&novo->rg);
	novo -> prox = NULL;//novo final da lista
	if((*lista)==NULL){//se a lista ficar vazia
		*lista = novo;
		novo->ID=1;
	}else{
		node *tmp;//no temporario
		tmp= (*lista);
		while(tmp->prox != NULL){//busca o ultimo elemento
			tmp = tmp->prox;
		}
		tmp -> prox = novo;
		tmp -> prox -> ID=tmp->ID+1;
	}
}
//remove um cliente
int removes(LISTA* lista){
    int flag=0,id;
    node *antNode, *tmp;// no temporario
    tmp = (*lista);
    printf("Informe o ID do cliente a ser removido\n");
	scanf("%i",&id);
     if ( (*lista) == NULL){
        printf("LISTA VAZIA");
	}else{
		do{
			if(id==tmp->ID){
               antNode->prox=tmp->prox;
               free(tmp);
               printf("Cliente removido!\n");
               flag=1;
			}else{
			    antNode=tmp;
                tmp = tmp->prox;
			}
		}while (flag!=1);
    }
}
//libera (desaloca) lista
void libera (LISTA* lista){
	if((*lista)==NULL){
		printf("LISTA VAZIA");
	}else{
		node *tmp;
		while ((*lista) != NULL){
			tmp = *lista;
			*lista = (*lista)->prox;
			free(tmp);
		}
		*lista=NULL;
	}
}
void edita(LISTA* lista){
    int flag=0,id,op;
    node *tmp;// no temporario
    tmp = (*lista);
    printf("Informe o ID do cliente a ser editado\n");
	scanf("%i",&id);
     if ( (*lista) == NULL){
        printf("LISTA VAZIA");
	}else{
		do{
			if(id==tmp->ID){
               printf("O que deseja alterar?\n 1- Nome\n 2- Telefone\n 3- RG\n");
               scanf("%i",&op);
               switch(op){
                case 1:
                    printf("Digite o novo nome: ");
                    fflush(stdin);
                    gets(&tmp->nome);
                    break;
                case 2:
                    printf("Digite o novo telefone: ");
                    fflush(stdin);
                    gets(&tmp->telefone);
                    break;
                case 3:
                    printf("Digite o novo RG: ");
                    fflush(stdin);
                    gets(&tmp->rg);
                    break;
               }
               printf("Cliente editado!\n");
               flag=1;
			}else{
                tmp = tmp->prox;
			}
		}while (flag!=1);
    }
}
int main (){
    LISTA *lista = criarLista();
    int op;
    do{
        printf(" -- MANTER CLIENTE -- AEROPORTO DE TOLEDO --\n");
        printf("\nLista de clientes:\n");
        exibe(lista);
        printf("O que voce deseja fazer?\n 1- Cadastrar novo cliente\n 2- Comprar passagem com conta do referido cliente\n 3- Editar informacoes de cliente\n 4- Excluir cliente\n 0- Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                insere(lista);
                break;
            case 3:
                edita(lista);
                break;
            case 4:
                removes(lista);
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

