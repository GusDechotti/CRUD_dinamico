//cria��o da estrutura das lista/cria��o da cabe�a
struct Node{//criando o tipo do elemento da lista
	char nome[50],telefone[18],rg[13];//dado
	int ID;
	struct Node *prox;//cria o ponteiro para o proximo
};
typedef struct Node node;//apelido
typedef node *LISTA;//declara��o ponteiro da cabe�a da lista
//cria��o da lista
LISTA* criarLista(){
	LISTA *inicio = (LISTA*) malloc (sizeof(LISTA));//aloca cabe�a da lista
	if(inicio != NULL){
		*inicio=NULL;
	}else{
		printf("Erro na alocacao");
		exit(0);
	}
	return inicio;
}
static FILE *pont_arq;//chama o arquivo txt
#include"horariosempresas.h"
#include"horariosempresaspt2.h"
#include"horariosempresaspt3.h"
#include"lugaraviao.h"
#include"exibe.h"
#include"removes.h"
#include"insere.h"
#include"libera.h"
#include"edita.h"
#include"compra.h"
#include"expande.h"
