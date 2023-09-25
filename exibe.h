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
