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

